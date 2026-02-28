/**
 * @file main.cpp
 * @brief MG995 Closed-Loop Axis Control System
 *
 * @author Akshat Lakhotiya
 * @date February 28, 2026
 * @version 1.0
 *
 * This program implements basic servo motor control for the MG995 servo motor.
 * The servo is controlled to move through three distinct positions (0°, 90°, and 180°)
 * in a continuous loop with 1-second delays between each movement.
 *
 * @section Hardware
 * - Microcontroller: Arduino-compatible board
 * - Servo Motor: MG995 (or compatible servo)
 * - Control Pin: Pin 9
 *
 * @section Pin Configuration
 * - Servo Signal Pin: 9 (PWM-capable pin)
 *
 * @section Operation
 * The servo cycles through the following positions with 1-second intervals:
 * 1. 0° (Minimum position)
 * 2. 90° (Middle position)
 * 3. 180° (Maximum position)
 *
 * Then the cycle repeats indefinitely.
 *
 * @section Dependencies
 * - Arduino.h: Core Arduino library
 * - Servo.h: Servo motor control library
 */

#include <Arduino.h>
#include <Servo.h>

/** @brief Global servo motor object for controlling the MG995 servo */
Servo myServo;

/**
 * @brief Arduino setup function - called once at startup
 *
 * Initializes the servo motor by attaching it to pin 9.
 * This function sets up the PWM signal generation on the specified pin
 * and prepares the servo for control operations.
 *
 * @return void
 *
 * @note This function is automatically called by the Arduino framework
 *       before the loop() function begins execution.
 */
void setup() {
    myServo.attach(9);
}

/**
 * @brief Arduino main loop function - called repeatedly after setup()
 *
 * Executes a continuous servo position cycle:
 * - Moves servo to 0° and holds for 1 second
 * - Moves servo to 90° and holds for 1 second
 * - Moves servo to 180° and holds for 1 second
 * - Repeats indefinitely
 *
 * This creates a smooth, continuous motion pattern through the full range
 * of the servo's movement.
 *
 * @return void
 *
 * @note This function is called repeatedly by the Arduino framework
 *       throughout the program's runtime. The delay() function blocks
 *       execution, preventing other code from running during the wait period.
 */
void loop() {
    myServo.write(0);
    delay(1000);
    myServo.write(90);
    delay(1000);

    myServo.write(180);
    delay(1000);
}
