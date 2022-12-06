#!/usr/bin/python3
#2_exercise.py

"""
Write a Python program to create a function that takes one argument, and that argument will be multiplied with an unknown given number.
"""

def multiplier(n):
    return lambda x : x * n

double = multiplier(2)
print(f"Double the number of 15 = {double(15)}")
triple = multiplier(3)
print(f"Triple the number of 15 = {triple(15)}")
quadruple = multiplier(4)
print(f"Quadruple the number of 15 = {quadruple(15)}")
quintuple = multiplier(5)
print(f"Quintuple the number of 15 = {quintuple(15)}")
