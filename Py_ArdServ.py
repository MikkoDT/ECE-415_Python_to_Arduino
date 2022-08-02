import serial

servPos=serial.Serial('com8',9600)

while True:
    Pos=input('Input servo motor position: ')
    Pos=Pos+'\r'
    servPos.write(Pos.encode())