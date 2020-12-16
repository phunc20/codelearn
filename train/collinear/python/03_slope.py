def collinear(coordinates):
    """
    Passing thru one pt with some fixed slope \implies
    must exist only one such line

    Rmk. If we are to use slope, we must deal separately with one particular case:
    Vertical line.
    """
    def slope(A, B, epsilon=1e-10):
        denominator = A[0] - B[0]
        numerator = A[1] - B[1]
        if abs(denominator) < epsilon:
            return (numerator / epsilon) * (-1 if denominator < 0 else 1)
        else:
            return numerator / denominator

    A, B, C = coordinates
    if A[0] == B[0] == C[0]:
        return True
    print(f"A = {A}")
    print(f"B = {B}")
    print(f"C = {C}")
    epsilon = 1e-10
    slope_AB = slope(A, B)
    slope_AC = slope(A, C)
    print(f"max(B[0] - A[0], epsilon) = {max(B[0] - A[0], epsilon)}")
    print(f"max(C[0] - A[0], epsilon) = {max(C[0] - A[0], epsilon)}")
    print(f"slope_AB = {slope_AB}")
    print(f"slope_AC = {slope_AC}")
    if abs(slope_AB - slope_AC) < epsilon:
        return True
    else:
        return False


if __name__ == "__main__":
    print(f"collinear([[2,1],[3,2], [0, -1]]) = {collinear([[2,1],[3,2], [0, -1]])}")
    print()
    print(f"collinear([[0,0],[-1,6],[2,-12]]) = {collinear([[0,0],[-1,6],[2,-12]])}")

