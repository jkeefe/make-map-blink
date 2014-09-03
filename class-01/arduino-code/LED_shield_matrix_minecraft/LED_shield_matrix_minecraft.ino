// Adafruit_NeoMatrix example for single NeoPixel Shield.

// Adeptation by John Keefe
// Graphic designs by Natalie Keefe

#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#ifndef PSTR
#define PSTR // Make Arduino Due happy
#endif

#define PIN 6

// Color definitions
#define BLACK    0x0000
#define BLUE     0x001F
#define RED      0xF800
#define GREEN    0x07E0
#define CYAN     0x07FF
#define MAGENTA  0xF81F
#define YELLOW   0xFFE0 
#define WHITE    0xFFFF


// MATRIX DECLARATION:
// Parameter 1 = width of NeoPixel matrix
// Parameter 2 = height of matrix
// Parameter 3 = pin number (most are valid)
// Parameter 4 = matrix layout flags, add together as needed:
//   NEO_MATRIX_TOP, NEO_MATRIX_BOTTOM, NEO_MATRIX_LEFT, NEO_MATRIX_RIGHT:
//     Position of the FIRST LED in the matrix; pick two, e.g.
//     NEO_MATRIX_TOP + NEO_MATRIX_LEFT for the top-left corner.
//   NEO_MATRIX_ROWS, NEO_MATRIX_COLUMNS: LEDs are arranged in horizontal
//     rows or in vertical columns, respectively; pick one or the other.
//   NEO_MATRIX_PROGRESSIVE, NEO_MATRIX_ZIGZAG: all rows/columns proceed
//     in the same order, or alternate lines reverse direction; pick one.
//   See example below for these values in action.
// Parameter 5 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)


// Example for NeoPixel Shield.  In this application we'd like to use it
// as a 5x8 tall matrix, with the USB port positioned at the top of the
// Arduino.  When held that way, the first pixel is at the top right, and
// lines are arranged in columns, progressive order.  The shield uses
// 800 KHz (v2) pixels that expect GRB color data.
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(5, 8, PIN,
NEO_MATRIX_TOP     + NEO_MATRIX_RIGHT +
NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE,
NEO_GRB            + NEO_KHZ800);

const uint16_t colors[] = {
  matrix.Color(255, 0, 0), matrix.Color(0, 255, 0), matrix.Color(0, 0, 255) };

void setup() {
  matrix.begin();
  matrix.setTextWrap(false);
  matrix.setBrightness(30);
  matrix.setTextColor( Wheel(120) ); // set the initial text color
}

int x  = 0;
uint16_t ORANGE = matrix.Color(255, 165, 0);
uint16_t PINK = matrix.Color(255, 192, 203);

void loop() {
  matrix.fillScreen(0); // clears the screen

  // set the cursor where you want to start, 
  // decrement by 5 each time until you hit the end of the word
  matrix.setCursor(x, 0); // sets the corner where you want to start

  drawStampy();
  matrix.show();
  delay (2000);
  matrix.fillScreen(0); // clears the screen
  
  drawSquid();
  matrix.show();
  delay (2000);
  matrix.fillScreen(0); // clears the screen
  
  drawSteve();
  matrix.show();
  delay (2000);
  matrix.fillScreen(0); // clears the screen
  
  drawKitty();
  matrix.show();
  delay (2000);
  matrix.fillScreen(0); // clears the screen

  drawCreeper();
  matrix.show();
  delay (2000);
  matrix.fillScreen(0); // clears the screen

  drawMooshroom();
  matrix.show();
  delay (2000);
  matrix.fillScreen(0); // clears the screen
  
  drawPuppyClimbing();
  matrix.show();
  delay (2000);
  matrix.fillScreen(0); // clears the screen 

}

void drawStampy() {

  matrix.drawLine(0, 3, 0, 4, ORANGE);
  matrix.drawLine(1, 0, 1, 7, ORANGE);
  matrix.drawPixel(1,1, GREEN);
  matrix.drawLine(2, 1, 2, 2, ORANGE);
  matrix.drawLine(2, 3, 2, 4, WHITE);
  matrix.drawPixel(2,5, ORANGE);
  matrix.drawLine(3, 0, 3, 7, ORANGE);
  matrix.drawPixel(3,1, GREEN);
  matrix.drawLine(4, 3, 4, 4, ORANGE);

}

void drawSquid() {

  matrix.drawLine(0, 3, 0, 4, BLUE);
  matrix.drawLine(1, 0, 1, 7, BLUE);
  matrix.drawLine(2, 0, 2, 5, BLUE);
  matrix.drawPixel(2, 1, RED);
  matrix.drawLine(3, 0, 3, 7, BLUE);
  matrix.drawLine(4, 3, 4, 4, BLUE);

}

void drawSteve() {

    matrix.fillScreen(PINK);
    matrix.drawLine(1, 0, 2, 0, 0);
    matrix.drawRect(1, 1, 2, 2, RED);
    matrix.drawRect(0, 3, 4, 2, GREEN);
    matrix.drawPixel(0, 4, RED);
    matrix.drawPixel(3, 4, RED);
    matrix.drawRect(1, 5, 2, 3, BLUE);

}

void drawKitty() {
 
  matrix.fillScreen(GREEN);
  matrix.drawLine(1, 5, 3, 5, 0);
  matrix.drawLine(3, 3, 3, 6, 0);
  matrix.drawPixel(4, 4, WHITE);
  matrix.drawPixel(1, 6, 0);
  matrix.drawPixel(3, 7, WHITE);
  matrix.drawPixel(1, 7, WHITE);
  matrix.drawPixel(0, 4, WHITE);
  
}

void drawCreeper() {
  
  matrix.drawLine(1, 1, 1, 7, GREEN);
  matrix.drawPixel(1, 2, RED);
  matrix.drawLine(2, 1, 2, 6, GREEN);
  matrix.drawPixel(2, 3, RED);
  matrix.drawLine(3, 1, 3, 7, GREEN);
  matrix.drawPixel(3, 2, RED);  
  
}

void drawMooshroom() {
 
  matrix.drawPixel(0, 6, WHITE);
  matrix.drawPixel(0, 7, RED);
  matrix.drawLine(1, 5, 1, 6, RED);
  matrix.drawPixel(2, 6, WHITE);
  matrix.drawLine(3, 4, 3, 7, RED);
  matrix.drawPixel(4, 5, PINK);
  
}

void drawPuppyClimbing() {

  matrix.drawLine(0, 2, 4, 2, WHITE);
  matrix.drawLine(3, 2, 3, 5, WHITE);
  matrix.drawPixel(4, 5, WHITE);
  matrix.drawPixel(2, 6, WHITE);
  matrix.drawPixel(1, 7, WHITE);
  matrix.drawPixel(1, 1, WHITE);
  matrix.drawPixel(2, 2, RED);
  
}


// Input a value 0 to 255 to get a color value.
// If incremented, colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  if(WheelPos < 85) {
    return matrix.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } 
  else if(WheelPos < 170) {
    WheelPos -= 85;
    return matrix.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } 
  else {
    WheelPos -= 170;
    return matrix.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}

