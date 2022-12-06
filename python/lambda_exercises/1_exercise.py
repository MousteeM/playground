#!/usr/bin/python3
# Exercise_1.py

"""Write a Python program to create a lambda function that adds 15 to a given number passed in as an argument,
also create a lambda function that multiplies argument x with argument y and print the result."""

mul = lambda x : x + 15
print(mul(10))
mul = lambda x, y : x * y
print(mul(12, 4))
