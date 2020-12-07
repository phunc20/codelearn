def redundancy_number(n):
    if n < 0:
        return n
    while True:
        total = 0
        for i in range(2, int(math.sqrt(n)) + 1):
            if n % i == 0:
                total = total + i + n // i if n != i**2 else total + i
        if total + 1 > n:
            return n
        n += 1
