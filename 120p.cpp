/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/musta/Desktop/SIT210Code/120p/src/120p.ino"
void setup();
void dot();
void dash();
void name();
void loop();
void blink();
#line 1 "c:/Users/musta/Desktop/SIT210Code/120p/src/120p.ino"
const int ledPin = D7;
const int interruptPin = D2;
volatile int state = HIGH;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(interruptPin, blink, CHANGE);
}

void dot()
{
  digitalWrite(ledPin, HIGH);
  delay(333.33);
  digitalWrite(ledPin, LOW);
  delay(1000);
}

void dash()
{
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}

void name()
{
  dot();
  dot();
  dot();
  dot();
}

void loop()
{
  if (state == LOW)
  {
    name();
  }
}

void blink()
{
  // state = !state;
}

// // // // // // // // // // // // // // // // //

/*BACKUP
// EXAMPLE USAGE

void blink(void);
int ledPin = D7;
volatile int switchPin = D2;


void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
  attachInterrupt(switchPin, blink, FALLING);
}

void dot()
{
  digitalWrite(ledPin, HIGH);
  delay(333.33);
  digitalWrite(ledPin, LOW);
  delay(1000);
}

void dash()
{
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}

void name()
{
  dot();
  dot();
  dot();
  dot();
}

void loop()
{

  if (switchPin == LOW)
  {
    name();
  }

}

void blink()
{
  switchPin = !switchPin;
}
*/