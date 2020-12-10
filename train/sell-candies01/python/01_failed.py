def sellCandies1(n):
    six
    #neuf
    #vingt
    max_float = n / six
    max_int = int(max_float)
    if max_float == max_int:
        return max_int
    for six in range(max_int - 1, -1, -1):
        for neuf in range(max_int - 1 - 6*six, -1, -1):
            for vingt in range(max_int - 1 - 6*six - 9*neuf, -1, -1):


if __name__ == "__main__":
    print(f"sellCandies1(6) should be equal to 1: {sellCandies1(6)}")
    print(f"sellCandies1(77) should be equal to 10: {sellCandies1(77)}")
    print(f"sellCandies1(63) should be equal to 10: {sellCandies1(63)}")
    print(f"sellCandies1(49) should be equal to 3: {sellCandies1(49)}")
    print(f"sellCandies1(1009) should be equal to 163: {sellCandies1(1009)}")
    print(f"sellCandies1(2004) should be equal to 334: {sellCandies1(2004)}")
