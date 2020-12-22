def is_special(k, primes, specials):
    """
    args:
         k, int
             The number being examined
         primes, list
             List of primes \lt k
         specials, list
             List of special primes \lt k
    return:
        (k_is_prime, k_is_special), tuple(bool, bool)
    """
    prime_divides = [k % s == 0 for s in [p for p in primes if p**2 <= k]]
    k_is_prime = len(prime_divides) == 0 or not any(prime_divides)
    #print(f"primes whose square lt {k} = {[p for p in primes if p**2 <= k]}")
    if not k_is_prime:
        k_is_special = False
        return k_is_prime, k_is_special

    one_digit_less = k // 10
    #print(f"one_digit_less = {one_digit_less}")
    while one_digit_less > 0:
        print(f"one_digit_less = {one_digit_less}")
        if one_digit_less not in specials:
            # This test could have been `if one_digit_less not in primes:`, but this is eqiuv. to that.
            # Moreover, `in specials` is more efficient (in that ones it fails, we can stop the iteration).
            k_is_special = False
            return k_is_prime, k_is_special
        else:
            one_digit_less = one_digit_less // 10
    k_is_special = True
    return k_is_prime, k_is_special


def find_special_prime(n):
    if n <= 1:
        return []
    primes = [2,]
    specials = [2,]
    for i in range(3, n+1, 2):
        i_is_prime, i_is_special = is_special(i, primes, specials)
        if i_is_prime:
            primes.append(i)
        if i_is_special:
            specials.append(i)
    return specials


if __name__ == "__main__":
    n = 100
    print(f"find_special_prime({n}) = {find_special_prime(n)}")
