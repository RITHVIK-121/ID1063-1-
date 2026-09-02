import numpy as np

n = int(input("Enter the value of n: "))
values = np.array(input("Enter the values: ").split(), dtype=int)

# Count occurrences of each integer from 0 to 9
counts = np.bincount(values, minlength=10)

print()
for digit in range(10):
    print(f"{digit}: {counts[digit]}")

