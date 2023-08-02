#!/usr/bin/python3
"""Module contains formal description of class Base."""

class Base:
    """Formal description for the Base class.


    This class will be the 'base' of all other classes in this project. The
    goal of it is to manage `id` attribute in all other classes and to avoid
    duplicating the same code(by extension, same bugs)

    Attributes:
        id (:obj: `int`, optional): instance id
    """

    __nb_objects = 0

    def __init__(self, id=None):
        """instance initialization method"""
        if id != None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects
