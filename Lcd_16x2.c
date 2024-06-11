/*
    Project name : LCD 16x2 Display
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-lcd-16x2-display
*/

#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 2);
  // Print a message to the LCD
  lcd.print("Hello, World!");
}

void loop() {
  // Set the cursor to column 0, line 1
  // Line 1 is the second row, since counting begins with 0
  lcd.setCursor(0, 1);
  // Print a message to the LCD
  lcd.print("LCD 16x2 Display");
  delay(2000);
  // Clear the display
  lcd.clear();
  // Print a message to the LCD
  lcd.print("Arduino Nano");
  delay(2000);
}
