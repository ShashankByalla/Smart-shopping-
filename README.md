# Smart-shopping-

The **Smart Shopping** project simulates a smart shopping cart system using Arduino. This system uses components like an LCD display, a button, an LED, and a buzzer to simulate item scanning, product information display, and feedback mechanisms.

## Features
- **Item Simulation**: Simulates scanning items (Apple, Banana, Orange) and displays the name and price on the LCD.
- **Visual Feedback**: Turns on an LED whenever an item is scanned.
- **Audible Feedback**: Plays a buzzer tone for confirmation after scanning.
- **Serial Communication**: Displays item details and price in the Serial Monitor.

## Hardware Components
- 16x2 LCD Display
- Push Button
- LED
- Buzzer
- Arduino Board (e.g., Uno, Mega)
- Connecting Wires

## Software Requirements
- Arduino IDE (to upload the code)
- Serial Monitor (for debugging and output display)

## File Structure
- `smart_cart_simulation.ino`: The main Arduino sketch file containing the code for the smart shopping cart simulation.

## How to Use
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/Smart-shopping.git

	2.	Open the smart_cart_simulation.ino file in the Arduino IDE.
	3.	Connect the hardware components as per the code’s pin configuration:
	•	LCD: Pins 12, 11, 5, 4, 3, 2
	•	Button: Pin 7
	•	LED: Pin 9
	•	Buzzer: Pin 10
	4.	Upload the code to the Arduino board.
	5.	Press the button to simulate item scanning and observe the LCD, LED, and buzzer feedback.

Code Explanation

The Arduino sketch performs the following tasks:
	•	Initializes the LCD display, button, LED, and buzzer.
	•	Monitors button presses to simulate item scanning.
	•	Displays the scanned item’s name and price on the LCD and Serial Monitor.
	•	Provides visual and audible feedback using the LED and buzzer.

Example Output

	•	LCD Display:

Item: Apple
Price: $100


	•	Serial Monitor:

Scanned Item: Apple
Price: $100


Contributing

If you’d like to contribute to this project, feel free to fork the repository and submit a pull request.
