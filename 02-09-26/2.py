import numpy as np

n = int(input("Enter the value of n: "))
v1 = np.array(input("Enter the values of the first vector: ").split(), dtype=float)
v2 = np.array(input("Enter the values of the second vector: ").split(), dtype=float)

dot_product = np.dot(v1, v2)

print(f"\nThe dot product is {dot_product:g}.")

