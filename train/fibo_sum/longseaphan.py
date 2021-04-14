# Idea from
#longseaphan@gmail.com
def fiboSum(n):
    # Find a finite Fibonacci seq (with distinct elements) whose sum exceeds n a little bit
    total = 3
    fibo = [1, 2]
    while total < n:
        fibo.append(fibo[len(fibo) - 2] + fibo[len(fibo) - 1])
        total += fibo[len(fibo) - 1]

    index = len(fibo) - 1
    while total != n:
        if total - fibo[index] >= n:
            total -= fibo[index]
            fibo.pop(index)
        index -= 1

    if len(fibo) == 0:
        return [-1]
    return fibo







