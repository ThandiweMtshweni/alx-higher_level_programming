#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last = number % 10
my_str = f"Last digit of {number} is {last} "
if last > 5:
    print(my_str + "greater than 5")
elif last == 0:
    print(my_str + 'and is 0')
else:
    print(my_str + 'and is less than 6 and not 0')