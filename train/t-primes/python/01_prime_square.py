def collect(a,b):
    import math
    def is_prime(n):
        if n == 1:
            return False
        if n % 2 == 0 and n > 2: 
            return False
        return all(n % i for i in range(3, int(math.sqrt(n)) + 1, 2))

    def is_prime_squared(n):
        sqrt = math.sqrt(n)
        if sqrt != math.floor(sqrt):
            return False
        if is_prime(sqrt):
            return True
        else:
            return False

    t_primes = []
    for i in range(a, b+1):
        if is_prime_squared(i):
            t_primes.append(i)

    if not t_primes:
        # i.e. if t_primes is an empty list
        return [-1]
    else:
        return t_primes


if __name__ == "__main__":
    print(f"{collect(1,6)} = [4]")
