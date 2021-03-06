"""
https://stackoverflow.com/questions/4941753/is-there-a-math-ncr-function-in-python
"""

import operator as op
from functools import reduce

def ncr(n, r):
    r = min(r, n-r)
    numer = reduce(op.mul, range(n, n-r, -1), 1)
    denom = reduce(op.mul, range(1, r+1), 1)
    return numer // denom

def verticesValue(edge):
    # ==========================
    #  Using math.comb
    # ==========================
    #from math import comb
    #l = len(edge)
    #n = l - 1
    #components = [edge[i]*comb(n, i)*(-1 if (l+i) % 2 == 0 else 1) for i in range(n+1)]
    #vertex = sum(components)
    #return str(vertex % 1000000007 if vertex >= 0 else vertex % -1000000007)
    # ==========================
    #  Not using math.comb
    # ==========================
    l = len(edge)
    n = l - 1
    components = [edge[i]*ncr(n, i)*(-1 if (l+i) % 2 == 0 else 1) for i in range(n+1)]
    vertex = sum(components)
    return str(vertex % 1000000007 if vertex >= 0 else vertex % -1000000007)





if __name__ == "__main__":
    edge = [5941, 5836, 3374, 4493, 7967, 4081, 2601, 1000, 3190, 7524, 4217, 4127, 3949, 4717, 651, 2611, 2400, 7811, 486, 2179, 4590, 5578, 242, 3718, 4330, 1237, 4856, 7509, 6364, 734, 705, 7005, 212, 2106, 4128, 6758, 2503, 2671, 7488, 1692, 1515, 5510, 2200, 185, 7589, 2156, 5444, 3661, 4468, 294, 4511, 1117, 1263, 8049, 5317, 4260, 400, 4080, 1136, 1623, 8118, 3038, 1780, 1921, 5318, 2517, 6930, 4260, 5665, 4110, 234, 6256, 1006, 5044, 135, 2905, 4031, 8119, 1057, 6004, 3961, 7818, 838, 3820, 1295, 2569, 3274, 914, 5503, 5097, 4683, 1714, 1162, 4131, 4803, 7698, 7183, 5975, 5163, 6999]
    print(f"verticesValue(edge) = {verticesValue(edge)}")
