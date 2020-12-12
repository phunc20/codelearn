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

    def next_prime(n):
        """
        jump thru odd numbers, omitting even numbers.

        """
        if n & 0x1:
            next_ = n + 2
        else:
            next_ = n + 1
        while not is_prime(next_):
            next_ += 2
        return next_

    #t_primes = []
    primes = []
    # find the first t-prime
    found = False
    for i in range(a, b+1):
        if is_prime_squared(i):
            #t_primes.append(i)
            primes.append(int(math.sqrt(i)))
            break
    else:
        return [-1]

    #excessive_prime = primes[0]
    excessive_prime = next_prime(primes[0])
    #while excessive_prime**2 < b:
    while excessive_prime**2 <= b:
        #excessive_prime = next_prime(excessive_prime)
        #primes.append(excessive_prime)
        primes.append(excessive_prime)
        excessive_prime = next_prime(excessive_prime)

    return [i**2 for i in primes]


if __name__ == "__main__":
    print(f"{collect(1,6)} = [4]")
