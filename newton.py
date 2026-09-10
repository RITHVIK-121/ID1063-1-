#rithvik
#Date 10-09-2026

import math

# Define the function f(x) = e^x - 2
def f(x):
    return math.exp(x) - 2

# Define the derivative of the function f'(x) = e^x
def df(x):
    return math.exp(x)

# Newton-Raphson formula: x_1 = x_0 - f(x_0) / f'(x_0)
x_0 = 1
x_1 = x_0 - f(x_0) / df(x_0)

# Round off to two decimal places
result = round(x_1, 2)

print(f"The value after one iteration is: {result}")

