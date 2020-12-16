Basically, this is asking:
When you are given a list of real positive numbers $a_{1}, \ldots, a_{n}$ (or positive integers), find the unique
numbers among them and return the number of such unique numbers, i.e. how many unique numbers there are .

## Bài gốc dài dọt
Trong một cuộc thi chạy tại trường THCS Trần Phú, có tổng cộng n đội tham gia, mỗi đội được đánh số thứ tự tăng dần. Sau khi hoàn thành cuộc thi chạy, từng đội sẽ được ghi kết quả thời gian chạy vào một danh sách times, đội thứ i sẽ có thời gian chạy là times[i]. Ban tổ chức muốn trao giải cho các đội thi, sao cho thỏa mãn các yêu cầu sau:

Phải có ít nhất một đội được chọn để trao giải.
Nếu có một đội được chọn thì tất cả những đội có thành tích chạy tốt hơn cũng phải được trao giải.
Hãy cho biết có bao nhiêu cách để trao giải cho các đội.

Ví dụ:

Với n = 4 và times = [2,3,3,1] thì marathon(n, times) = 3.
Giải thích: Ta có 3 cách để trao giải
- Cách 1: Chọn đội thứ 4.
- Cách 2: Chọn đội thứ 1 và thứ 4.
- Cách 3: Chọn tất cả các đội.
Đầu vào/Đầu ra:

[Thời gian chạy] 0.5s với C++, 3s với Java và C#, 4s với Python, Go và JavaScript.
[Đầu vào] Integer n, Array of Integers times
1 ≤ n ≤ 10^6
1 ≤ times[i] ≤ 10^9
[Đầu ra] Integer










