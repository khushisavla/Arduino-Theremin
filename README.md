# Arduino-Theremin
Inspired by the compact form and melodic capability of a portable harmonium, this project explores a theremin-style electronic instrument using Arduino. It uses hand distance to play musical notes, mimicking the interaction of a theremin while aiming to improve control and portability.

**Current Functionality**
A master Arduino reads distance values from an ultrasonic sensor.
This data is sent via I²C to a slave Arduino.
The slave interprets the distance and plays corresponding tones on a buzzer.

🔧 Note: This project could be implemented with a single Arduino. However, the two-Arduino setup was intentionally chosen to practice and demonstrate I²C communication.

**Next Steps**
1. Integrate Touch Sensors
      -> To reduce signal noise and error from the ultrasonic sensor
      -> To enable multi-note input (polyphony) by detecting presses on multiple sensors

3. Smooth Note Transitions
Current output is in discrete jumps between fixed notes -> Aim to implement continuous pitch control (true theremin behavior) or legato-style note blending for better melodies

4. Enclosure Design
Use CAD and laser cutting/2D printing to design a housing for the components -> Make the device more portable, protected, and visually appealing

5. Improve This README
      -> Add circuit diagrams, photos, and setup instructions
      -> Include demo videos and possible extensions
