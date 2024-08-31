# GestureX: Master Hand Command for Robotic Precision

## Overview
GestureX is a hand gesture-controlled robotic arm project that uses computer vision and machine learning to translate human hand movements into robotic commands. By leveraging OpenCV, MediaPipe, and Arduino, GestureX creates a seamless interaction between humans and machines.

## Features
- **Real-Time Hand Tracking**: Utilizes MediaPipe and OpenCV for real-time gesture recognition.
- **Robotic Arm Control**: Sends gesture data to an Arduino-controlled robotic arm for precise movements.
- **Easy Setup and Use**: Designed to be user-friendly with clear instructions and minimal hardware requirements.

## Hardware Requirements
- **Computer with Webcam**: For capturing hand gestures.
- **Arduino Board (e.g., Arduino Uno)**: To control the robotic arm.
- **Servo Motors**: At least two servos for the robotic arm's movement.
- **Robotic Arm Model**: A simple cardboard or 3D-printed robotic arm.
- **USB Cable**: For connecting the Arduino board to the computer.
- **Jumper Wires**: For connecting the servos to the Arduino board.

## Software Requirements
- **Python 3.7 or Higher**
- **Arduino IDE**
- **Libraries**:
  - `opencv-python`
  - `mediapipe`
  - `pyserial` (for serial communication between Python and Arduino)
  - `flask` (for optional web interface)

## Getting Started

### 1. Clone the Repository
Clone the GestureX repository to your local machine:
```bash
git clone https://github.com/Aniket1234-cool/GestureX-Master-Hand-Command-for-Robotic-Precision.git
cd GestureX-Master-Hand-Command-for-Robotic-Precision.git
```

### 2. Set Up the Python Environment
Ensure you have Python 3.7 or higher. Check your version with:
```bash
python --version
```
Create and activate a virtual environment:
```bash
# For Windows
python -m venv venv
venv\Scripts\activate

# For macOS/Linux
python3 -m venv venv
source venv/bin/activate
```
Install the required Python packages:
```bash
pip install -r requirements.txt
```

### 3. Install Arduino IDE and Required Libraries
Download and install the Arduino IDE from the [official website](https://www.arduino.cc/en/software).

In the Arduino IDE, install the necessary libraries for controlling servos via **Sketch > Include Library > Manage Libraries...**.

### 4. Connect and Set Up the Hardware
**Connect the Servo Motors to the Arduino:**
- Connect servo signal wires to PWM-capable pins (e.g., pins 9 and 4 on Arduino Uno).
- Connect servo power and ground wires to Arduino's 5V and GND pins.

**Connect the Arduino to Your Computer:**
- Use a USB cable to connect the Arduino board to your computer.

### 5. Upload the Arduino Code
Open `arduino_servo_control.ino` in the Arduino IDE. Select the correct board and port under **Tools**:
- **Board**: Select your Arduino board (e.g., Arduino Uno).
- **Port**: Select the correct COM port for your Arduino.
Click **Upload** to upload the code.

### 6. Run the Python Script for Hand Tracking and Control
Ensure your webcam is properly set up. Run the `MAIN_cv_controll.py` Python script:
```bash
python MAIN_cv_controll.py
```

### 7. (Optional) Set Up the Web Interface
For web-based control, run the Flask server:
```bash
python flask_server.py
```
Open your web browser and navigate to [http://127.0.0.1:5000](http://127.0.0.1:5000) to access the interface.

### 8. Controlling the Robotic Arm
With `MAIN_cv_controll.py` running, the webcam will capture hand movements, and the robotic arm will respond accordingly:
- **Thumbs Up**: Servo motors rotate to predefined positions.
- **Fingers Count**: The number of fingers determines different robotic arm actions.

## Troubleshooting
- **Webcam Issues**: Ensure no other application is using your webcam.
- **Serial Communication Errors**: Verify the COM port and baud rate in both Python and Arduino code.
- **Servo Movement Issues**: Check wiring and connections; ensure servos have sufficient power.

## Future Enhancements
- **Add More Gestures**: Expand gesture recognition for additional robotic arm control.
- **Improve Accuracy**: Fine-tune model parameters for better hand tracking.
- **Integrate AI Models**: Incorporate AI for complex gesture predictions.

## Contributing
Contributions are welcome! Feel free to submit issues, fork the repository, and send pull requests.

## License
This project is licensed under the MIT License. See the LICENSE file for details.

## Acknowledgements
Special thanks to the open-source community for the tools and libraries used, including OpenCV, MediaPipe, and Arduino.
```
