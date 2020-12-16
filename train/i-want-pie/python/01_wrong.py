def lots_of_pie(n,k):
    n_choose_k = 1
    for i in range(k):
        n_choose_k *= (n-i)//(i+1)
    #return n_choose_k
    return str(n_choose_k)

