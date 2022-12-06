#!/usr/bin/python3

"""
Write a Python program to find if a given string starts with a given character using Lambda.
"""

def stringChecker(string, letter):
    x = lambda string, leter : True if string[0] == letter else False
    return x(string, letter)


print(stringChecker("Hello", "H"))
print(stringChecker("Hello", "P"))
