#!/usr/bin/python3

"""
Write a Python program to filter a list of integers using Lambda.
"""

mainList = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(f"Original list of integers:\n{mainList}")

evenList = list(filter(lambda x : x % 2 == 0, mainList))
print(f"Even numbers from said list:\n{evenList}")

oddList = list(filter(lambda x : x % 2 != 0, mainList))
print(f"Odd numbers from said list:\n{oddList}")
