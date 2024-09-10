#!/usr/bin/python3
def print_last_digit(num):
    if num < 0:
        last = num % -(10)
        print(-(last), end='')
    else:
        last = num % 10
        print(last, end='')
    return abs(last)
