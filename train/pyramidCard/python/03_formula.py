def pyramidCards(n):
    if n == 0:
        return 0
    else:
        #return sum(2*i + (i-1) for i in range(1, n+1))
        return (((n+1)*n) // 2) * 3 - n
