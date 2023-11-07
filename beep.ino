#include <ArduinoSTL.h>


const int buzzer = 9; //this is the pin for the buzzer

// Assign note names to frequencies
const int speed = 200;
const float A_3 = 220.00;
const float B_3 = 246.94;
const float C_4 = 261.63;
const float D_4 = 293.66;
const float E_4 = 329.63;
const float F_4 = 349.23;
const float G_4 = 392.00;
const float A_4 = 440.00;
const float B_4 = 493.88;
const float C_5 = 523.25;
const float D_5 = 587.33;
const float E_5 = 659.25;
const float F_5 = 698.46;
const float G_5 = 783.99;
const float A_5 = 880.00;

// This vector is a list of the notes in the song. Each note plays for {speed} milliseconds
std::vector<float> song = {A_3, C_4, E_4, G_4, A_4, C_5, E_5, G_5};

void playNote(float note) {
  tone(buzzer, note);
  delay(speed);
}



void setup() {
  pinMode(buzzer, OUTPUT); // Sets buzzer (or pin 9) as an Output Pin
}

void loop() {
  
  for(int i = 0; i < song.size(); i++) {
    playNote(song[i]);
  }

}
