def lots_of_pie(n,k):
    if n < 0 or k < 0 or n < k:
        return "-1"
    from functools import reduce
    g = lambda x, y: x*y
    #return reduce(g, range(n, n-k, -1)) // reduce(g, range(2, k+1))
    return str(reduce(g, range(n, n-k, -1)) // reduce(g, range(2, k+1)))
