#include <LiquidCrystal.h>

// Initialize the LCD. Change pins as necessary.
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD pins: RS, E, D4, D5, D6, D7

// Pin definitions
const int buttonPin = 7; // Pin connected to button
const int ledPin = 9;    // Pin connected to LED
const int buzzerPin = 10; // Pin connected to buzzer

// Variables to simulate items
int productCounter = 0;
bool buttonPressed = false;

void setup() {
    Serial.begin(9600);          // Initialize Serial communication
    lcd.begin(16, 2);            // Initialize LCD
    lcd.print("Smart Cart Ready"); // Display initial message on LCD
    delay(2000);                 // Wait 2 seconds to view the message
    lcd.clear();

    // Set pin modes
    pinMode(buttonPin, INPUT_PULLUP); // Set button pin with internal pull-up
    pinMode(ledPin, OUTPUT);          // Set LED pin as output
    pinMode(buzzerPin, OUTPUT);       // Set buzzer pin as output

    Serial.println("Setup complete.");
}

void loop() {
    // Check button state
    int buttonState = digitalRead(buttonPin);

    if (buttonState == LOW && !buttonPressed) {
        // Button is pressed and was not previously pressed
        buttonPressed = true;
        productCounter++;   // Increment the product count to simulate new item
        simulateItemScan(productCounter); // Display simulated item

        // Small delay to prevent bouncing
        delay(300);
    } else if (buttonState == HIGH) {
        // Reset buttonPressed flag when button is released
        buttonPressed = false;
    }
}

// Function to simulate an item scan
void simulateItemScan(int productID) {
    String productName = "Item";
    int productPrice = 0;

    // Simulate different products based on productID
    switch (productID % 3) { // Cycle through three items
        case 1:
            productName = "Apple";
            productPrice = 100;
            break;
        case 2:
            productName = "Banana";
            productPrice = 200;
            break;
        case 0:
            productName = "Orange";
            productPrice = 150;
            break;
    }

    // Display on LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Item: ");
    lcd.print(productName);
    lcd.setCursor(0, 1);
    lcd.print("Price: $");
    lcd.print(productPrice);

    // Display on Serial Monitor
    Serial.print("Scanned Item: ");
    Serial.println(productName);
    Serial.print("Price: $");
    Serial.println(productPrice);

    // Turn on LED and play buzzer tone for feedback
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000, 200); // Play tone for 200 ms
    delay(200); // Delay to allow buzzer sound to complete
    digitalWrite(ledPin, LOW);  // Turn off LED
}
