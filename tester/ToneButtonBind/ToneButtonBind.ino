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
#define masterReset A3


// change this to whichever pin you want to use
int buzzer1= 11;
int buzzer2= 10;
int buzzer3 = 9;



void setup() {

}

void loop() {

  Fancy(buzzer1);
  DTNA(buzzer2);
  YoY(buzzer3);
}