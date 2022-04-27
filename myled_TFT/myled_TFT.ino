#include <memorysaver.h>
#include <UTFT.h>

extern uint8_t SmallFont[];   //declare which fonts we willbe using

// initialize display

UTFT mylcd (ST7735S_4L_80160, 11, 13, 10, 8, 9); //lcd: 4Line serial interface SDA-11 / SCL-13/ CS-10 / RES-8 / DC-9

extern uint8_t BigFont[];   //declare which fonts wewill be using
extern unsigned short car1[];
int color = 0;

word colorlist[] = {VGA_WHITE, VGA_BLACK, VGA_RED, VGA_BLUE, VGA_GREEN, VGA_FUCHSIA, VGA_YELLOW, VGA_AQUA};
int bsize = 4;

void setup() {
  // put your setup code here, to run once:
  randomSeed(analogRead(0));

  //Setup thr lcd
  mylcd.InitLCD();
  mylcd.setFont(SmallFont);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  digitalWrite(5,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buf[158];
  int x, x2;
  int y, y2;
  int r;

  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);

  delay(99);

  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(100);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);

  delay(99);

  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(100);
  
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);

  delay(99);

  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(100);

  mylcd.clrScr();   // clear the screen and the frame

  mylcd.setColor(255, 0, 0);
  mylcd.fillRect(0, 0, 159, 13);
  mylcd.setColor(64, 64, 64);
  mylcd.fillRect(0, 114, 159, 127);
  mylcd.setColor(255, 255, 255);
  mylcd.setBackColor(255, 0, 0);
  mylcd.print("AI SMART CAR", CENTER, 1);
  mylcd.setBackColor(64, 64, 64);
  mylcd.setColor(255, 255, 0);
  mylcd.print("AI SMART CAR 1" , LEFT, 114);

  mylcd.setColor(0, 0, 255);
  mylcd.drawRect(0, 13, 159, 100);

  mylcd.drawBitmap(1, 14, 100, 140, car1);
  delay(5000);

  mylcd.setColor(0, 0, 0);
  mylcd.fillRect(1, 14, 158, 113);

  mylcd.setColor(0, 0, 255);
  mylcd.drawLine(0, 79, 159, 79);

  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);

  delay(99);

  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(1000);
  
  //Draw some filled rectangles left to right

  for (int i = 1; i < 6; i++) {
    switch (i) {
      case 1:
        mylcd.setColor(255, 0, 255);
        break;
      case 2:
        mylcd.setColor(255, 255, 0);
        break;
      case 3:
        mylcd.setColor(255, 0, 0);
        break;
      case 4:
        mylcd.setColor(0, 0, 255);
        break;
      case 5:
        mylcd.setColor(0, 255, 0);
        break;
    }
    mylcd.fillRect(39 + (i * 10), 23 + (i * 10), 59 + (i * 10), 43 + (i * 10));
  }

  delay(2000);

  mylcd.setColor(0, 0, 0);
  mylcd.fillRect(1, 14, 158, 113);
  mylcd.setColor(0, 0, 255);
  mylcd.drawLine(0, 79, 159, 79);

  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);

  delay(99);

  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(1000);
  
  //Draw somefilled,rounded rectangles right to left
  for (int i = 1; i < 6; i++) {
    switch (i) {
      case 1:
        mylcd.setColor(255, 0, 0);
        break;
      case 2:
        mylcd.setColor(255, 255, 0);
        break;
      case 3:
        mylcd.setColor(255, 0, 0);
        break;
      case 4:
        mylcd.setColor(0, 0, 255);
        break;
      case 5:
        mylcd.setColor(0, 255, 0);
        break;
    }
    mylcd.fillRoundRect(99 - (i * 10), 23 + (i * 10), 119 - (i * 10), 43 + (i * 10));
  }
  delay(2000);

  mylcd.setColor(0, 0, 0);
  mylcd.fillRect(1, 14, 158, 113);

  mylcd.setColor(0, 0, 255);
  mylcd.drawLine(0, 79, 159, 79);

  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);

  delay(99);

  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(1000);

  // Drawsomefilledcircles

  for (int i = 1; i < 6; i++) {


    switch (i)
    {
      case 1:
        mylcd.setColor(255, 0, 255);
        break;
      case 2:
        mylcd.setColor(255, 0, 0);
        break;
      case 3:
        mylcd.setColor(0, 255, 0);
        break;
      case 4:
        mylcd.setColor(0, 0, 255);
        break;
      case 5:
        mylcd.setColor(255, 255, 0);
        break;
    }
    mylcd.fillCircle(49 + (i * 10), 33 + (i * 10), 15);
  }
  delay(2000);

  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);

  delay(99);

  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(1000);
 
  mylcd.setColor(0, 0, 0);
  mylcd.fillRect(1, 14, 158, 113);

  mylcd.setColor(0, 0, 255);
  mylcd.drawLine(0, 79, 159, 79);

  mylcd.fillScr(0, 0, 255);
  mylcd.setColor(255, 0, 0);
  mylcd.fillRoundRect(10, 17, 149, 72);

  mylcd.setColor(255, 255, 255);
  mylcd.setBackColor(255, 0, 0);
  mylcd.print("AI SMART CAR", CENTER, 20);
  mylcd.print("MANUFACTURED BY", CENTER, 45);
  mylcd.print("PULINA PERERA", CENTER, 57);

  mylcd.setColor(0, 255, 0);
  mylcd.setBackColor(0, 0, 255);
  mylcd.print("Runtime: (msecs)", CENTER, 103);
  mylcd.printNumI(millis(), CENTER, 115);

  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);

  delay(99);

  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(100);
  
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);

  delay(99);

  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(1000);
  
  delay (5000);

  mylcd.setColor(0, 0, 0);
  mylcd.fillRect(1, 14, 158, 113);

  mylcd.setColor(0, 0, 255);
  mylcd.drawLine(0, 79, 159, 79);

  mylcd.fillScr(0, 0, 255);
  mylcd.setColor(255, 0, 0);
  mylcd.fillRoundRect(10, 17, 149, 72);

  mylcd.setColor(255, 255, 255);
  mylcd.setBackColor(255, 165, 0);
  mylcd.print("SUSL", CENTER, 20);
  mylcd.print("3rd Year", CENTER, 45);
  mylcd.print("Mini Project", CENTER, 57);

  mylcd.setColor(255, 0, 0);
  mylcd.setBackColor(255,255, 0);
  mylcd.print("Runtime: (msecs)", CENTER, 103);
  mylcd.printNumI(millis(), CENTER, 115);

  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);

  delay(99);

  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(3000);

  delay (5000);
}
