from pyfirmata import Arduino, SERVO, util
from time import sleep

port ='COM5'
pin=10
board=Arduino(port)

board.digital[pin].mode=SERVO

def rotatservo(pin,angle):
    board.digital[pin].write(angle)
    sleep(0.015)

while True:
    x=input("input : ")
    if x=="1":
        for i in range(0,100):
            rotatservo(pin,i)
    elif x=="2":
        for i in range(0,90):
            rotatservo(pin,i)
    elif x=="3":
        for i in range(0,270):
            rotatservo(pin,i)
