#rithvik
#date:23/09/2026
# Read the number of rows (m) and columns (n)
m, n = map(int, input().split())

# Read the threshold value
T = int(input())

# Read and process each row of the image
for i in range(m):

    # Read n pixel values
    a = list(map(int, input().split()))

    # Check each pixel against the threshold
    for j in range(n):
        if a[j] >= T:
            # Pixel is at least T, so make it white
            a[j] = 255
        else:
            # Pixel is less than T, so make it black
            a[j] = 0

    # Print the processed row with spaces between values
    print(*a)
