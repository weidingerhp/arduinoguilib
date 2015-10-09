// Do not remove the include below
#include "ArduinoTest.h"

#include "hpwguilib/WindowManagement.h"


using namespace hpwguilib;

WindowManagement *windows;

//char *text = "...---...";
char *signal = "...._.-_.-.._.-.._--- .--_._.-.._-"; // hallo welt
int signalLen = 0;
int curPos = 0;

void setup() {
	windows = WindowManagement::setup();
}

void loop() {
	windows->loop();
	//tft.println("Hello World");
/*  char ch = signal[curPos];
  int shineLength = 0;
  switch (ch) {
    case '.':
      shineLength = 50;
      break;
    case '-':
      shineLength = 200;
      break;
    case '_':
      delay(200);
      break;
    case ' ':
      delay(500);
      break;

  }

  if (shineLength > 0) {
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(shineLength);              // wait for a second
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(100);              // wait for a second
  }
  curPos++;
  if (curPos >= signalLen) {
    delay(500);
    curPos = 0;
  }*/
}
