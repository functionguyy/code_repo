#!/usr/bin/python3

class Robot(object):
    """A simple robot class

    Attributes:
    a (str): Human readable string
    """
    def __init__(self, robo_name=None):
        """initialization method"""
        self.name = robo_name
        print("__init__ has been executed!")


    def say_hi(self):
        """A simple method"""
        if self.name:
            print("Hello, my name is {}".format(self.name))
	else:
	    print("Hi, I am a robot without a name.")
	
    def set_name(self, robo_name):
	"""setter method for the robo_name attribute"""
	self.name = robo_name
	
    def get_name(self):
	"""getter method for the robo_name attribute"""
	return self.name

# Create instances of `Robot` class
p = Robot('Driod1')
x = Robot()

# call the `Robot` class method `say_hi` on its objects
p.say_hi()
x.say_hi()

print('---------')

# set a name for `Robot` class object `x` using setter method
x.set_name('Driod2')

print('---------')

# call the `Robot` class method `say_hi` on its objects
p.say_hi()
x.say_hi()

# get the name of `Robot` class object `p` using  getter method
print(p.get_name())

