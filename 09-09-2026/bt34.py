import matplotlib.pyplot as plt
import os
import numpy as np

def check_and_plot(k):
    # Coefficients of the lines:
    # Line 1: 2x + 3y = 6  ->  y = (6 - 2x) / 3
    # Line 2: 4x + 6y = 3k ->  y = (3k - 4x) / 6
    a1, b1, c1 = 2, 3, 6
    a2, b2, c2 = 4, 6, 3 * k

    # Determinant check
    det_main = a1 * b2 - a2 * b1  # 2*6 - 4*3 = 0
    det_x = c1 * b2 - c2 * b1    # 6*6 - (3k)*3 = 36 - 9k

    print(f"\n--- Results for k = {k} ---")
    if det_main == 0 and det_x == 0:
        status = "Consistent (Infinitely Many Solutions)"
        title_color = "green"
        print(f"Status: {status}\nExplanation: The lines lie directly on top of each other.")
    else:
        status = "Inconsistent (No Solution)"
        title_color = "red"
        print(f"Status: {status}\nExplanation: The lines are parallel and will never intersect.")

    # --- Plotting Setup ---
    x = np.linspace(-10, 10, 400)
    y1 = (c1 - a1 * x) / b1
    y2 = (c2 - a2 * x) / b2

    plt.figure(figsize=(8, 6))
    
    # If lines are coincident, offset one slightly in the label so both are visible
    if det_x == 0:
        plt.plot(x, y1, label='2x + 3y = 6', color='blue', linewidth=3)
        plt.plot(x, y2, label=f'4x + 6y = 3({k}) [Coincident]', color='orange', linestyle='--', linewidth=2)
    else:
        plt.plot(x, y1, label='2x + 3y = 6', color='blue', linewidth=2)
        plt.plot(x, y2, label=f'4x + 6y = 3({k})', color='orange', linewidth=2)

    # Styling the graph
    plt.axhline(0, color='black', linewidth=0.5, linestyle=':')
    plt.axvline(0, color='black', linewidth=0.5, linestyle=':')
    plt.grid(color='gray', linestyle='--', linewidth=0.5)
    plt.xlabel('X-axis')
    plt.ylabel('Y-axis')
    plt.title(f'Line Visualizer (k = {k})\n{status}', color=title_color, fontsize=12, fontweight='bold')
    plt.legend()
    plt.xlim(-10, 10)
    plt.ylim(-10, 10)
    
    # --- Code to Save Image as '34.png' ---
    filename = '34.png'
    plt.savefig("34.png", dpi=300, bbox_inches='tight')
    os.system("termux-open 34.png")
    

# Get input from user
try:
    user_k = float(input("Enter the value of k: "))
    check_and_plot(user_k)
except ValueError:
    print("Please enter a valid numeric value for k.")

