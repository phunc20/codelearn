def redundancy_number(n):
    import math
    def is_redundant(k):
        somme = 0
        #for i in range(1, k):
        #    if k % i == 0:
        #        somme += i
        #    if somme > k:
        #        return True
        root = int(math.sqrt(k))
        for i in range(1, ):
            if k % i == 0:
                somme += i
            if somme > k:
                return True
        return False
    next_redundancy = n
    found = is_redundant(next_redundancy)
    while not found:
        next_redundancy += 1
        found = is_redundant(next_redundancy)
    return next_redundancy
