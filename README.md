# PIC_display_binary_leds
PIC library to display an unsigned 8-bit integer using LEDs connected to digital outputs of the MCU.

**Everything you need to know is in the header file.**

## Long story short...
MPLAB ® X IDE v6.00 wouldn't stop crashing in my Linux machine.
I needed a simple solution for debugging and for getting exception return-values and LEDs are dirt cheap.

## Compiling with MPLAB ® XC8 using only the command line interface.
I'm a VIM, Make and GDB man, I dont use IDEs if I have a choice.
I'm also not a big fan of Java apps that take forever to load, eat 1GB of RAM and crash every half an hour.
Therefore, after I ran out of patience, I started compiling using XC8 CLI and downloading the .hex code
to the PIC using MPLAB ® IPE, which is also huge and buggy (pop up windows don't show any text) but I couldn't
find any decent alternative yet.

You can compile with XC8 as you would normally compile using GCC or Clang, just verify that the XC8 binaries are in your PATH.

I had to `echo 'export PATH=${PATH}:/opt/microchip/xc8/v2.36/bin' >> ~/.bashrc` in my case.

Only one option is mandatory: the MCU you are compiling for:
```
xc8-cc -mcpu=18f4525 functions1.c functions2.c main.c -o Program.hex
```
Run `xc8-cc --help` for a complete list of compiler options. 
For building libraries or creating makefiles [read the fine manual](https://www.microchip.com/en-us/tools-resources/develop/mplab-xc-compilers#Documentation).

<img src="https://user-images.githubusercontent.com/69062188/175383325-6cf37cd9-438e-46dd-a723-d68cfb9dfd51.jpg" width="80%"></img> 

© Copyright 1998-2022 Microchip Technology Inc. All rights reserved.
