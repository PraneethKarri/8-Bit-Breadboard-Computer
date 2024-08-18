# 8-Bit Breadboard Computer

Welcome to my 8-bit breadboard computer project! This project is inspired by Ben Eater's YouTube videos and is built entirely at the hardware level. No code is uploaded here, but you will find photos of the build and datasheets for the ICs used.

## Overview

This 8-bit breadboard computer is a simple yet functional computer built from basic integrated circuits on a breadboard. It demonstrates fundamental concepts of computer architecture, including binary logic, memory, and processing.

## Features

- **8-bit architecture**: The computer processes 8-bit data.
- **Simple instruction set**: Inspired by early microprocessors.
- **Manual clock control**: Allows you to step through instructions manually.
- **LED output**: Displays the results of operations and memory contents.
- **Hardware-only design**: No software code, purely based on physical connections and logic circuits.

## Components

The main components used in this build are:

- **Clock Module**: Generates the clock signal for the CPU.
- **Program Counter (PC)**: Keeps track of the current instruction address.
- **Memory**: Stores instructions and data.
- **Instruction Register (IR)**: Holds the current instruction being executed.
- **ALU (Arithmetic Logic Unit)**: Performs arithmetic and logic operations.
- **Control Unit**: Decodes instructions and generates control signals.
- **Output Register**: Displays the result of operations via LEDs.

## Photos

Here are some photos of the build process and the final setup:

![Breadboard Computer](Photos_and_Videos/IMG_20240818_180145.jpg)

## IC Datasheets

Below are the datasheets for the integrated circuits used in this project:

- [74F08 AND Gate 4 IC](datasheets/74F08_AND_GATE_4_IC.PDF)
- [74H04N Inverter](datasheets/74H04N_INVERTER.PDF)
- [74HC73 Dual JK Flip-Flop](datasheets/74HC73.PDF)
- [74HC86 Quad 2-Input XOR Gate](datasheets/74HC86_XOR_GATE_4_IC.PDF)
- [74HC161 4-Bit Binary Counter](datasheets/74HC161.PDF)
- [74HC245 Octal Bus Transceiver](datasheets/74HC245.PDF)
- [74HC273 Octal D-Type Flip-Flop](datasheets/74HC273.PDF)
- [74LS76 Dual JK Flip-Flop](datasheets/74LS76.PDF)
- [74LS189 64-Bit RAM](datasheets/74LS189.PDF)
- [74LS283 4-Bit Binary Adder](datasheets/74LS283.PDF)
- [CD4073B Triple 3-Input AND Gate](datasheets/CD4073B.PDF)
- [DM74LS02 Quad 2-Input NOR Gate](datasheets/DM74LS02.PDF)
- [DM74LS138 3-to-8 Line Decoder](datasheets/DM74LS138.PDF)
- [DM74S74N Dual D-Type Flip-Flop](datasheets/DM74S74N.PDF)
- [M28C16 2K x 8 EEPROM](datasheets/M28C16.PDF)
- [MC74AC02 Quad 2-Input NOR Gate](datasheets/MC74AC02_NOR_GATE_4_IC.PDF)
- [MC74HC595A 8-Bit Shift Register](datasheets/MC74HC595A.PDF)
- [SN54HC161 4-Bit Binary Counter](datasheets/SN54HC161.PDF)
- [SN54LS04 Hex Inverter](datasheets/SN54LS04.PDF)
- [SN54LS153 Dual 4-Input Multiplexer](datasheets/SN54LS153.PDF)
- [SN54LS173A 4-Bit D-Type Register](datasheets/SN54LS173A.PDF)
- [SN74LS245 Octal Bus Transceiver](datasheets/SN74LS245.PDF)
- [U74HC32 Quad 2-Input OR Gate](datasheets/U74HC32_OR_GATE_4_IC.PDF)
## Inspiration

This project is heavily inspired by [Ben Eater's YouTube series](https://www.youtube.com/playlist?list=PLowKtXNTBypGqImE405J2565dvjafglHU), which provides an excellent step-by-step guide to building a similar computer.

## How It Works

1. **Clock Module**: Generates a clock signal to synchronize the operations of the computer.
2. **Program Counter**: Increments to point to the next instruction in memory.
3. **Memory**: Stores a sequence of instructions and data.
4. **Instruction Register**: Holds the current instruction fetched from memory.
5. **Control Unit**: Decodes the instruction and generates the appropriate control signals.
6. **ALU**: Executes arithmetic and logic operations based on the control signals.
7. **Output Register**: Stores the result of the ALU operation and displays it via LEDs.

## Conclusion

Building this 8-bit breadboard computer has been a rewarding and educational experience. It offers a hands-on understanding of basic computer architecture and operation. I hope this project inspires you to explore the fascinating world of digital electronics and computer engineering.

Feel free to reach out if you have any questions or need further details about the project. Enjoy exploring the build!

---

**Note**: This project is intended for educational purposes and is based on open-source information. All credit for the inspiration and instructional content goes to Ben Eater.
