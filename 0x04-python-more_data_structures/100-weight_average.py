#!/usr/bin/python3

def weight_average(my_list=[]):
    if len(my_list) == 0:
        return (0)
    total = 0
    div = 0
    for item in my_list:
        total += item[0] * item[1]
        div += item[-1]
    return total/div
