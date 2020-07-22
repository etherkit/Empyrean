# Empyrean Alpha/Beta Test Plan

Revision: 7 Jun 2020

**This document is preliminary and a work in progress. It will be subject to modification as necessary for support Empyrean production.**

## Product Profile

Empyrean is a powerful yet affordable Arduino IDE-compatible microcontroller derived from the Arduino Zero. It is in a small, breadboard friendly form factor and costs significantly less than the Arduino Zero due to the omission of the rarely-used debugging IC and associated hardware.

## Test Procedure Overview

The purpose of the test is to ensure electrical connectivity for every GPIO pin on Empyrean. It will be assumed that if basic electical connectivity can be confirmed via GPIO that the pin peripherals on the microcontroller will also function correctly. A visual check that all on-board LEDs are functional is also required. The ATSAMD21 microcontroller will not need to be programed via the debug header, as these devices will be ordered from Microchip Technology with the bootloader pre-installed.

0. SETUP: connect test jig to PC, open serial terminal to jig.
1. Place DUT in jig, connect DUT to PC via micro USB.
2. Load test sketch to DUT and reset DUT.
3. Reset jig to execute GPIO test.
4. After GPIO test completes, verify all 4 LEDs function by eye.
5. On test completion, disconnect DUT, goto step 1 if further DUT to test.

## Tools

|Device|Quantity|Comment|
|------|--------|-------|
| PC | 1 | Any OS which can run Arduino IDE |
| Empyrean test jig | 1 | |
| Micro USB cable | 2 | For connecting test jig and DUT to PC |

## Required Program Files

TBD

## Detailed Test Procedure

TBD
