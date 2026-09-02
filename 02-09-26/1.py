import numpy as np

n = int(input("Enter the value of n: "))

# Create 1D array from 1 to n and compute outer product matrix
arr = np.arange(1, n + 1)
table = np.outer(arr, arr)

# Print each row space-separated
for row in table:
    print(*row)

