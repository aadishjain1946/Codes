import threading
from datetime import datetime


def print_time():
    threading.Timer(5.0, print_time).start()
    current_time = datetime.now().time().strftime("%H:%M:%S")
    current_date = datetime.now().strftime("%Y-%m-%d")
    print("----------------------------")
    print("Date:", current_date)
    print("Time:", current_time)


print_time()
