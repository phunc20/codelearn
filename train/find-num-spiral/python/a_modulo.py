def findNumberSpiral(x,y):
    if x > y:
        is_odd = x % 2
        if is_odd:
            return (x-1)**2 + y
        else:
            return x**2 - y + 1
    else:
        is_odd = y % 2
        if is_odd:
            return y**2 - x + 1
        else:
            return (y-1)**2 + x
