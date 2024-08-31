import cvzone
import cv2
from cvzone.HandTrackingModule import HandDetector
from cvzone.SerialModule import SerialObject

cap = cv2.VideoCapture(0)
detector = HandDetector(maxHands=1, detectionCon=0.8)
mySerial = SerialObject("COM6", 9600, 1)
while True:
    success, img = cap.read()
    hands, img = detector.findHands(img)

    if hands:
        myHand = hands[0]
        fingers = detector.fingersUp(myHand)
        print(fingers)
        mySerial.sendData(fingers)

    cv2.imshow("Image", img)
    cv2.waitKey(1)