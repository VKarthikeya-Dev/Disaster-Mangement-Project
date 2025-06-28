import serial
import requests
# Replace with your bot token and chat ID
bot_token = '7839123554:AAFRLR6iv01MUgtgjFQC0yYwyIhMYUuN03s'
chat_id = '5399919589'


arduino_port = 'COM3'
baud_rate = 9600
ser = serial.Serial(arduino_port, baud_rate)

def send_telegram_message(message):
    url = f'https://api.telegram.org/bot{bot_token}/sendMessage'
    data = {'chat_id': chat_id, 'text': message}
    response = requests.post(url, data=data)
    return response.json()

print("Listening for  alerts from Arduino...")

while True:
    if ser.in_waiting:
        line = ser.readline().decode('utf-8',errors='ignore').strip()  # Read message from Arduino
        if line == "Fire detected!":
            print("Fire detected! Sending Telegram alert...")
            send_telegram_message("Alert: Fire detected by Arduino! Evacuate immediately")
        elif line == "Flood detected!":
            print("Flood detected! Sending Telegram alert...")
            send_telegram_message("Flood detected! Evacuate low-lying areas!")
        elif line == "Earthquake detected!":
            print("earthquake detected! Sending Telegram alert...")
            send_telegram_message("Earthquake detected! Drop, cover, and hold on!")