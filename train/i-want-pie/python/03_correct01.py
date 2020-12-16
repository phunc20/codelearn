def lots_of_pie(n,k):
    if n < 0 or k < 0 or n < k:
        return "-1"
    denominator = 1
    numerator = 1
    for i in range(k):
        denominator *= i + 1
        numerator *= n - i
    return str(numerator // denominator)
