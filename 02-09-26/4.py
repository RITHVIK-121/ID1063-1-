    import numpy as np

m = int(input("Enter the value of m: "))
n = int(input("Enter the value of n: "))

grid = np.full((m, n), ' ')

grid[0, :] = '*'
grid[-1, :] = '*'
grid[:, 0] = '*'
grid[:, -1] = '*'

for row in grid:
    print(''.join(row))

