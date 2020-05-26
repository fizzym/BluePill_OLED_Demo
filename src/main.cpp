#include <Wire.h>
#include <Adafruit_SSD1306.h>

//------------

#define OLED_RESET -1  // Not used
Adafruit_SSD1306 display(OLED_RESET);

#define MAGIC_NUMBER 123456

//------------
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3C (for the 128x64)
  // init done

  // Clear the buffer.
  display.clearDisplay();

  // Draw a test
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Hello ENPH253");
  display.drawPixel(0,45,WHITE);
  display.display();
  delay(100);
}

//------------
void loop() {
  pinMode(LED_BUILTIN, HIGH);
  delay(1000);
  pinMode(LED_BUILTIN, LOW);
  delay(1000);
}