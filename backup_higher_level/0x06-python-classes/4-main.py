#!/usr/bin/python3
Square = __import__('4-square').Square

my_square = Square(89)
try:
    print(my_square.size)
except Exception as e:
    print(e)
print("Area: {} for size: {}".format(my_square.area(), my_square.size))

my_square = Square(3)
print("Area: {} for size: {}".format(my_square.area(), my_square.size))
try:
    my_square.size = "5 feet"
    print("Area: {} for size: {}".format(my_square.area(), my_square.size))
except Exception as e:
    print(e)

mysquare = Square(89)
print(mysquare.size)
print(my_square.__dict__)
