def pyramidCards(n):
    if n == 0:
        return 0
    else:
        return pyramidCards(n-1) + 2*n + (n-1)
