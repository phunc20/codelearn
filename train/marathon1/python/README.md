My solution `02_uniq.py` seems to be a correct solution but **too slow to be accepted** as an answer.
```bash
[phunc20@homography-x220t python]$ time python 02_uniq.py
5365 should be 5365
619 should be 619.

real    0m0.596s
user    0m0.558s
sys     0m0.037s
[phunc20@homography-x220t python]$ time python 01_sort.py
5365 should be 5365
619 should be 619.

real    0m0.110s
user    0m0.089s
sys     0m0.020s
```

**(?)** What do you think that makes the construction of `uniq` so much slower than `set(times)`? And can you improve it? That is, can you write a code in python which run almost as fast as `set(times)`?
