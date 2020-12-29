Cho 2 lưới ô vuông A và B cùng kích thước, mỗi ô có chỉ nhận các giá trị 0 hoặc 1 (A khác B). Các ô lưới được đánh số từ trên xuống dưới, từ trái qua phải bắt đầu từ 0.

Cho phép thực hiện phép biến đổi sau đây với lưới A:

Chọn ô (i, j) và đảo giá trị của ô đó và các ô chung cạnh với nó (0 thành 1, 1 thành 0).
Hãy xác định xem bằng cách áp dụng dãy biến đổi trên có thể đưa A về B được hay không? Nếu có hãy chỉ ra cách sử dụng ít phép biến đổi nhất, kết quả được trả dưới dạng một mảng mà tại một ví trị của mạng đó chứa một mảng gồm 2 giá trị [i, j] thể hiện phép biến đổi tại vị trí đó. Nếu không có cách nào thì trả về []

Ví dụ:

Với

a = [[1,0,0,0,0],
     [1,0,0,0,0],
     [0,1,0,0,0],
     [0,1,0,0,0]]
b = [[0,0,0,0,0],
     [0,0,0,0,0],
     [0,0,1,0,0],
     [0,0,0,0,0]]

thì kết quả two_equal_matrix(a, b) = [[1, 0], [2, 1]]
**N.B.** [[2, 1], [1, 0]] is considered **wrong** answer.

Đầu vào/Đầu ra:

[Thời gian chạy] 0.5s với C++, 3s với Java và C#, 4s với Python, Go và JavaScript.

[Đầu vào] array of arrays of integers a, b.
a.size = b.size
a[0].size = b[0].size
0 < a.size ≤ 15
0 < a[0].size ≤ 15
[Đầu ra] array of arrays of integers.
Kết quả thỏa mãn đề
