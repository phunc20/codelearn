Một số được gọi là số dư thừa khi tổng các ước nguyên nhỏ hơn nó lớn hơn chính nó. Cho một số n, hãy tìm số dư thừa đầu tiên không nhỏ hơn n.

Ví dụ:

Với n = 6 thì redundancy_number(n) = 12.
Giải thích: Tổng các ước của 12 là
1 + 2 + 3 + 4 + 6 = 16 ⇒ 16 > 12. (Các số nhỏ hơn thì không thỏa mãn, nhẩm phát là ra :vv)
Đầu vào/Đầu ra:

[Thời gian chạy] 0.5s với C++, 3s với Java và C#, 4s với Python, Go và JavaScript.
[Đầu vào] Integer n
-10^9 < n < 10^9
[Đầu ra] Long


## Test cases
```
redundancy_number(6) = 12
redundancy_number(65) = 66
redundancy_number(858) = 858
redundancy_number(90) = 90
redundancy_number(8664239) = 8664240
redundancy_number(9124812) = 9124812
```




