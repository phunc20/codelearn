def collinear(coordinates):
    """
    Passing thru one pt with some fixed slope \implies
    must exist only one such line
    """
    A, B, C = coordinates
    epsilon = 1e-10
    slope_AB = (B[1] - A[1]) / (B[0] - A[0])
    slope_AC = (C[1] - A[1]) / (C[0] - A[0])
    if abs(slope_AB - slope_AC) < epsilon:
        return True
    else:
        return False


if __name__ == "__main__":
    print(f"collinear([[2,1],[3,2], [0, -1]]) = {collinear([[2,1],[3,2], [0, -1]])}")
