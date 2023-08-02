#!/usr/bin/python3
"""Module contains add_integer function which adds two integers"""

def add_integer(a, b=98):
    if isinstance(a, float):
        a = int(a)
    elif not isinstance(a, (int, float)):
        raise TypeError("a must be an integer")
    if isinstance(b, float):
        b = int(b)
    elif not isinstance(b, (int, float)):
        raise TypeError("b must be an integer")
    return a + b

