#!/usr/bin/python3

"""
Write a Python program to square and cube every number in a given list of integers using Lambda.
"""

mainList = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(f"Original list of integers:\n{mainList}")

squareList = list(map(lambda x : x ** 2, mainList))
print(f"Square every number of the said list:\n{squareList}")

cubeList = list(map(lambda x : x ** 3, mainList))
print(f"Square every number of the said list:\n{cubeList}")
