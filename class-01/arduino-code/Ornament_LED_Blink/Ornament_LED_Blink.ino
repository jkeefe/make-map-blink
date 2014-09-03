
/*
*
* Blinking LED Ornament  
* 
* John Keefe
* December 24, 2013
*
* http://johnkeefe.net
* john (at) johnkeefe.net
*
* Free to use as you see fit!
*
*
* NOTE: Tinyduino usese "Arduino Pro or Pro Mini (3.3V, 8MHz) w ATmega328."
*/

// light[] hold the array of LED outputs in the circular order 
// of the lights
int light[] = {1, 3, 4, 5, 6, 2};
int num_lights =  6;

void setup() {

  for (int x = 0; x < num_lights; x++) {
    pinMode(light[x], OUTPUT); // Set each pin as output
  }

}

void loop() {
  
  circleOn();
  circleOn();
  zipOn();
  delay(2000);
  zipOff();
  delay(2000);
  instantOn();
  delay(1000);
  instantOff();
  delay(1000);
  instantOn();
  delay(1000);
  instantOff();
  delay(1000);
  instantOn();
  delay(1000);
  instantOff();
  delay(1000);
  spokes(500);
  spokes(500);

}

void circleOn() {

  for (int i = 0; i < num_lights; i++) {
    
    digitalWrite(light[i],HIGH);
    delay(400);
    digitalWrite(light[i],LOW);
    
  }

}

void zipOn() {

  for (int y = 0; y < num_lights; y++) {
    digitalWrite(light[y], HIGH); // turns LED on
    delay(100);             // waits for 1/10 second
  }
  
}

void zipOff(){

  for (int z = 0; z < num_lights; z++) {
    digitalWrite(light[z], LOW); // turns LED on
    delay(100);             // waits for 1 second
  }

}

void instantOn(){
  
    for (int y = 0; y < num_lights; y++) {
    digitalWrite(light[y], HIGH); // turns LED on
  }
  
}

void instantOff(){
  
    for (int y = 0; y < num_lights; y++) {
    digitalWrite(light[y], LOW); // turns LED on
  }
  
}

void spokes(int waitTime){

  for (int i=0; i<3; i++){
   digitalWrite(light[i], HIGH);
   digitalWrite(light[i+3], HIGH);
   delay(waitTime);
   digitalWrite(light[i], LOW);
   digitalWrite(light[i+3], LOW);
   
  }
}
