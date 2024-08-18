#define shift_data 13
#define shift_clk 11
#define shift_latch 12
#define EEPROM_D0 2
#define EEPROM_D7 9
#define writeEN 10

void setAddress(int address,bool outputEnable){
  shiftOut(shift_data, shift_clk, MSBFIRST , (address >> 8) | (outputEnable ? 0x00 : 0x80));
  shiftOut(shift_data, shift_clk, MSBFIRST , address);

  digitalWrite(shift_latch, LOW);
  digitalWrite(shift_latch, HIGH);
  digitalWrite(shift_latch, LOW);
}

byte readEEPROM(int address){

   for (int pin = EEPROM_D0; pin <= EEPROM_D7; pin += 1) {
    pinMode(pin, INPUT);
  }

  setAddress(address,true);
  byte data = 0;
  for(int pin = EEPROM_D7;pin >= EEPROM_D0;pin--){
    data = (data << 1) + digitalRead(pin);
  }
  return data;
}

void printContents() {
  for (int base = 0; base <= 2047; base += 16) {
    byte data[16];
    for (int offset = 0; offset <= 15; offset += 1) {
      data[offset] = readEEPROM(base + offset);
    }

    char buf[80];
    sprintf(buf, "%03x:  %02x %02x %02x %02x %02x %02x %02x %02x   %02x %02x %02x %02x %02x %02x %02x %02x",
            base, data[0], data[1], data[2], data[3], data[4], data[5], data[6], data[7],
            data[8], data[9], data[10], data[11], data[12], data[13], data[14], data[15]);

    Serial.println(buf);
  }
  Serial.println("");
}

void writeEEPROM(uint16_t address, byte data) {
  setAddress(address, /*outputEnable*/ false);

  for (int pin = EEPROM_D0; pin <= EEPROM_D7; pin += 1) {
    pinMode(pin, OUTPUT);
  }

  for (int pin = EEPROM_D0; pin <= EEPROM_D7; pin += 1) {
    digitalWrite(pin, data & 1);
    data = data >> 1;
  }

  digitalWrite(writeEN, LOW);
  delayMicroseconds(1);
  digitalWrite(writeEN, HIGH);
  delay(10);
}

void setup(){
  pinMode(shift_data,OUTPUT);
  pinMode(shift_clk,OUTPUT);
  pinMode(shift_latch,OUTPUT);
  digitalWrite(writeEN,HIGH);
  pinMode(writeEN,OUTPUT);
  
  
  Serial.begin(115200);
  
  // writeEEPROM(0x00,0xff);
  // Serial.println(readEEPROM(0x00));
for (int i =0;i<1024;i++){
//   setAddress(i,true);
//   delay(1);
writeEEPROM(i,255);
}

  // Serial.println("done");

printContents();
  
}

void loop(){

}
