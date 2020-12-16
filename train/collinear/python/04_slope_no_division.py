def collinear(coordinates):
    """
    Passing thru one pt with some fixed slope \implies
    must exist only one such line. Multiplying on both
    sides of the equation to make the equation involving
    no division, i.e.
        h1 / w1 = h2 / w2
        \iff
        h1 * w2 = h2 * w1

    """
    A, B, C = coordinates
    #print(f"B = {B}")
    #print(f"C = {C}")
    epsilon = 1e-10
    #slope_AB = slope(A, B)
    #slope_AC = slope(A, C)
    #print(f"max(B[0] - A[0], epsilon) = {max(B[0] - A[0], epsilon)}")
    #print(f"max(C[0] - A[0], epsilon) = {max(C[0] - A[0], epsilon)}")
    #print(f"slope_AB = {slope_AB}")
    #print(f"slope_AC = {slope_AC}")
    if abs((A[1] - B[1])*(A[0] - C[0]) - (A[1] - C[1])*(A[0] - B[0])) < epsilon:
        return True
    else:
        return False


if __name__ == "__main__":
    print(f"collinear([[2,1],[3,2], [0, -1]]) = {collinear([[2,1],[3,2], [0, -1]])}")
    print()
    print(f"collinear([[0,0],[-1,6],[2,-12]]) = {collinear([[0,0],[-1,6],[2,-12]])}")

