def collinear(coordinates):
    """
    Passing thru one pt with some fixed slope \implies
    must exist only one such line
    """
    A, B, C = coordinates
    print(f"A = {A}")
    print(f"B = {B}")
    print(f"C = {C}")
    epsilon = 1e-10
    slope_AB = (B[1] - A[1]) / max(B[0] - A[0], epsilon)
    slope_AC = (C[1] - A[1]) / max(C[0] - A[0], epsilon)
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

