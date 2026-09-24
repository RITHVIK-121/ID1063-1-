#rithvik
#date 24-09-26
import numpy as np

# Define the matrix P
P = np.array([[1, 0, 1],
,
              [1, 0, 1]])

# Calculate eigenvalues
eigenvalues = np.linalg.eigvals(P)

print("--- Verification of Options ---")

# Option A: Trace of P is equal to the sum of the Eigen values of P
trace_P = np.trace(P)
sum_eigenvalues = np.sum(eigenvalues)
is_option_a_true = np.isclose(trace_P, sum_eigenvalues)
print(f"Option A (Trace == Sum of Eigenvalues): {is_option_a_true}")
print(f"  Trace: {trace_P}, Sum of Eigenvalues: {sum_eigenvalues}\n")

# Option B: P^T * P is an identity matrix
P_transpose_P = np.dot(P.T, P)
identity_matrix = np.eye(3)
is_option_b_true = np.allclose(P_transpose_P, identity_matrix)
print(f"Option B (P^T * P is Identity): {is_option_b_true}")
print(f"  P^T * P:\n{P_transpose_P}\n")

# Option C: P is a skew-symmetric matrix (P^T == -P)
is_option_c_true = np.allclose(P.T, -P)
print(f"Option C (P is Skew-Symmetric): {is_option_c_true}\n")

# Option D: Absolute magnitude of each Eigen value is 1
abs_eigenvalues = np.abs(eigenvalues)
is_option_d_true = np.all(np.isclose(abs_eigenvalues, 1.0))
print(f"Option D (All |Eigenvalues| == 1): {is_option_d_true}")
print(f"  Eigenvalues: {eigenvalues}")
print(f"  Magnitudes: {abs_eigenvalues}")

