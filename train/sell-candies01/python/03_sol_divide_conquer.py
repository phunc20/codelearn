def sellCandies1(n):
    def sellCandies0(k, small=9, big=20):
        max_ = k // small
        if small*max_ == k:
            return max_
        else:
            for s in range(max_-1,-1,-1):  # i.e. s = max_-1, max_-2, ..., 2, 1, 0
                b_float = (k - s*small) / big
                b_int = int(b_float)
                if b_float == b_int:
                    return s + b_int
            else:
                return -1
    max_float = n / 6 
    max_int = int(max_float)
    if max_float == max_int:
        return max_int
    for six in range(max_int - 1, -1, -1):
        k = n - 6*six
        partial_ans = sellCandies0(k)
        if partial_ans != -1:
            return partial_ans + six
    else:
        return -1

if __name__ == "__main__":
    print(f"sellCandies1(6) should be equal to 1: {sellCandies1(6)}")
    print(f"sellCandies1(77) should be equal to 10: {sellCandies1(77)}")
    print(f"sellCandies1(63) should be equal to 10: {sellCandies1(63)}")
    print(f"sellCandies1(49) should be equal to 3: {sellCandies1(49)}")
    print(f"sellCandies1(1009) should be equal to 163: {sellCandies1(1009)}")
    print(f"sellCandies1(2004) should be equal to 334: {sellCandies1(2004)}")
