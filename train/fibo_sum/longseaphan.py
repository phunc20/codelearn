# Idea from
#longseaphan@gmail.com
def fiboSum(n):
    total = 3
    fibo = [1, 2]
    while total < n:
        fibo.append(fibo[len(fibo)-2] + fibo[len(fibo)-1])
        total += fibo[len(fibo)-1]

    index = len(fibo) - 1
    while total != n:
        if total - fibo[index] >= n:
            total -= fibo[index]
            fibo.pop(index)
        index -= 1
    # The above while loop will exit iff total == n
    """
    In [1]: L = [1,2,3,4]
    
    In [2]: L[-5]
    ---------------------------------------------------------------------------
    IndexError                                Traceback (most recent call last)
    <ipython-input-2-6481c767790b> in <module>
    ----> 1 L[-5]
    
    IndexError: list index out of range
    
    In [3]: L[-4]
    Out[3]: 1
    
    In [4]: L[4]
    ---------------------------------------------------------------------------
    IndexError                                Traceback (most recent call last)
    <ipython-input-4-1eef6b78def1> in <module>
    ----> 1 L[4]
    
    IndexError: list index out of range
    """
    if len(fibo) == 0:
        return [-1]
    return fibo




# Improved version
def fiboSum(n):
    if n <= 0:
        return [-1]
    # Find a finite Fibonacci seq (with distinct elements) whose sum exceeds n only by a little bit
    total = 3
    fibo = [1, 2]
    while total < n:
        fibo.append(fibo[-2] + fibo[-1])
        total += fibo[-1]

    index = len(fibo) - 1
    # Both while below are accepted solutions
    #while total != n:
    while total != n and index >= 0:
        if total - fibo[index] >= n:
            total -= fibo[index]
            fibo.pop(index)
        index -= 1
    # The index was alright above; pop() does not affect.

    return fibo


def fiboSum_no_pop(n):
    if n <= 0:
        return [-1]
    # Find a finite Fibonacci seq (with distinct elements) whose sum exceeds n only by a little bit
    total = 3
    fibo = [1, 2]
    while total < n:
        fibo.append(fibo[-2] + fibo[-1])
        total += fibo[-1]

    index = len(fibo) - 1
    ##unwanted = []
    #unwanted = set()
    wanted = []
    while total != n:
        if total - fibo[index] >= n:
            total -= fibo[index]
            ##unwanted.append(index)
            #unwanted.add(index)
        else:
            wanted.append(index)
        index -= 1
    wanted.sort()
    ##return [ x for i, x in enumerate(fibo) if i not in unwanted]
    #return [ fibo[i] for i in range(len(fibo)) if i not in unwanted]
    return [ fibo[i] for i in wanted]
