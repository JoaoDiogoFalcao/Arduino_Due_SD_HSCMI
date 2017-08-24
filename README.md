SD HSCMI for the Arduino Due
==============
Firmware for Arduino Due SD HSCMI Card.
Pin wiring set for the PowerDué.
Reference for PowerDué lab for Low Power System on Chip Spring 2016 at CMU-SV.

Install
==============
1. Download the files
2. Move the folder `Arduino_Due_SD_HSCMI` to your Arduino Libraries

Storage manipulation
==============
* The `SD` object will be created on `#include <Arduino_Due_SD_HSCMI.h>`
* Use `SD.MakeDirectory` to create a directory

Creating a file
==============
* Create a new FileStore with `FileStore * f = new FileStore()`
* Initiate the File pointer with `f->Init()`
* Open the File Structure with `f->Open([DIRECTORY], [FILENAME], [FILE_WRITE | FILE_READ])`
* Write with `f->Write([BUFFER], [LENGHT]);`
* Close `f->Close()`

Arduino Wiring
==============
### Arduino_Due_SD_HSCMI.h
Change following values to match the wiring of your board.
```
static const uint8_t PIN_HSMCI_MCCDA_GPIO  = 101;
static const uint8_t PIN_HSMCI_MCCK_GPIO  = 102;
static const uint8_t PIN_HSMCI_MCDA0_GPIO  = 103;
static const uint8_t PIN_HSMCI_MCDA1_GPIO  = 104;
static const uint8_t PIN_HSMCI_MCDA2_GPIO  = 105;
static const uint8_t PIN_HSMCI_MCDA3_GPIO  = 106;

static const uint8_t PIN_HSMCI_CARD_DETECT_ARDUINO = 77;
static const uint8_t PIN_HSMCI_MCCDA_GPIO_ARDUINO  = 43;
static const uint8_t PIN_HSMCI_MCCK_GPIO_ARDUINO  = 42;
static const uint8_t PIN_HSMCI_MCDA0_GPIO_ARDUINO  = 73;
static const uint8_t PIN_HSMCI_MCDA1_GPIO_ARDUINO  = 57;
static const uint8_t PIN_HSMCI_MCDA2_GPIO_ARDUINO  = 56;
static const uint8_t PIN_HSMCI_MCDA3_GPIO_ARDUINO  = 55;
```
