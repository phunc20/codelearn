Một số nguyên tố được gọi là siêu nguyên tố nếu như ta lần lượt xóa các chữ số bên phải đi, ta vẫn được các số nguyên tố.

Ví dụ 2333 là một số siêu nguyên tố vì khi ta lần lượt xóa các chữ số bên phải, thì ta được các số: [233, 23, 2] đều là các số nguyên tố.

Bạn hãy giúp DAN tìm tất cả các số siêu nguyên tố bé hơn hoặc bằng n. Kết quả trả về theo thứ tự tăng dần.

Ví dụ:

Với n = 10 thì findSpecialPrime(n) = [2, 3, 5, 7].

Với n = 100 thì findSpecialPrime(n) = [2, 3, 5, 7, 23, 29, 31, 37, 53, 59, 71, 73, 79].

Đầu vào/ Đầu ra:

Giới hạn thời gian chạy: 0.5 giây với C++, 3 giây với Java và C#, 4 giây với Python, GO và Js.
[Đầu vào] Integer n
0 <= n <= 10^7
[Đầu ra] Integer


```python
In [53]: def is_prime(n):
    ...:     if n == 1:
    ...:         return False
    ...:     if n % 2 == 0 and n > 2:
    ...:         return False
    ...:     return all(n % i for i in range(3, int(math.sqrt(n)) + 1, 2))
    ...:

In [54]: is_prime(2333)
---------------------------------------------------------------------------
NameError                                 Traceback (most recent call last)
<ipython-input-54-c40345e0644b> in <module>
----> 1 is_prime(2333)

<ipython-input-53-2a0eefcd8df6> in is_prime(n)
      4     if n % 2 == 0 and n > 2:
      5         return False
----> 6     return all(n % i for i in range(3, int(math.sqrt(n)) + 1, 2))

NameError: name 'math' is not defined

In [55]: import math

In [56]: is_prime(2333)
Out[56]: True

In [57]: is_prime(233)
Out[57]: True

In [58]: is_prime(23)
Out[58]: True

In [59]: is_prime(2)
Out[59]: True

In [60]:
```
