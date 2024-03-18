#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number < 0:
    stable = (-number % 10) * -1
else:
    stable = number % 10
print(f"Last digit of {number:d} is {stable:d} and is", end='')
if stable > 5:
    print(" greater than 5")
elif stable == 0:
    print(" 0")
else:
    print(" less than 6 and not 0")
