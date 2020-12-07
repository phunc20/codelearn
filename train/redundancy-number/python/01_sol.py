def redundancy_number(n):
    if n <= 0:
        return n
    import math
    def is_redundant(k):
        # --------------------------------------
        #  Implementation 01: Too slow, probably
        # --------------------------------------
        #somme = 0
        #for i in range(1, k):
        #    if k % i == 0:
        #        somme += i
        #    if somme > k:
        #        return True

        # ------------------
        #  Implementation 02
        # ------------------
        somme = 1
        root = math.floor(math.sqrt(k))
        for i in range(2, root):
            if k % i == 0:
                the_other_divisor = k // i
                somme += i + the_other_divisor
            if somme > k:
                return True
        if k % root == 0:
            the_other_divisor = k // root
            if the_other_divisor == root:
                somme += root
            else:
                somme += root + the_other_divisor
        if somme > k:
            return True
        else:
            return False

    present = n
    found = is_redundant(present)
    while not found:
        present += 1
        found = is_redundant(present)
    return present
