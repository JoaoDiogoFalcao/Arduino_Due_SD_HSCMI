#include <Arduino_Due_SD_HSCMI.h> // This creates the object SD

void setup() {
  SD.Init();
	SD.MakeDirectory("TestDir");
}

void loop() {

}
