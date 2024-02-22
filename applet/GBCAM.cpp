// Pins

#include "WProgram.h"
void setup();
void loop();
void nanoSync();
int nanoPin = 2;
int potPin = 1;
int audioPin = 0;
int switchPin = 3;

void setup() {
  pinMode(nanoPin, OUTPUT);
}

void loop() {
  if(analogRead(audioPin) > analogRead(potPin) && digitalRead(switchPin) == 1) {
    nanoSync();
  }
}

void nanoSync() {
  for(int i = 0; i < 6; i ++) {
    digitalWrite(nanoPin, i % 2); 
    delay(10);
  }
  delay(20);
}
int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

