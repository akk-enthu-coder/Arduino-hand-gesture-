import serial
import pyautogui
Arduino_serial = serial.Serial("/dev/cu.usbmodem14101",9600)
   
while 1 :
    incoming_data = str (Arduino_serial.readline())
    print(incoming_data)
    if "pause" in incoming_data :
        pyautogui.keyDown("space")

    incoming_data = "";
