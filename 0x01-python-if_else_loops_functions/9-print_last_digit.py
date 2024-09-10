#!/usr/bin/python3
def print_last(num):
    if num < 0:
        last = num % -10
        print(-last, end='')
    else:
        last = num % 10
        print(last, end='')
    return abs(last)
