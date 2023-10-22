/* 
  Hedwig's theme - Harry Potter 
  Connect a piezo buzzer or speaker to pin 11 or select a new pin.
  More songs available at https://github.com/robsoncouto/arduino-songs                                            
                                              
                                              Robson Couto, 2019
*/

#include "pitches.h"
#include "buzzerSong.h"

#define masterReset A0
#define btn1 A1
#define btn2 A2
#define btn3 A3

#define led1 8
#define led2 7
#define led3 6

// change this to whichever pin you want to use
int buzzer1= 11;
int buzzer2= 10;
int buzzer3 = 9;


int isClear = 0;



void setup() {    
  // Fancy(buzzer1);
  // DTNA(buzzer2);
  // YoY(buzzer3);

  Serial.begin(9600);
}


void close_all_LED() {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}

void loop() {

if (isClear == 0) {
  if( digitalRead(btn1) == HIGH) { 
  Serial.println("btn1 clicked ");
  close_all_LED();
  digitalWrite(led1, HIGH);
  Fancy(buzzer1);
  isClear = 1; 
  }

  if( digitalRead(btn2) == HIGH) { 
  Serial.println("btn2 clicked ");
  close_all_LED();
  digitalWrite(led2, HIGH);
   DTNA(buzzer2);
  isClear = 1; 
  }
  if( digitalRead(btn3) == HIGH) { 
  Serial.println("btn3 clicked ");
  close_all_LED();
  digitalWrite(led3, HIGH);
  YoY(buzzer3);
  isClear = 1; 
  }
}
if(isClear == 1) {
  if( digitalRead(masterReset) == HIGH) { 
  Serial.println("reset clicked ");
  close_all_LED();
  isClear = 0; 
  }
}
  
}