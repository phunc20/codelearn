Cho một danh sách coordinates là tọa độ của 3 điểm bất kỳ trên hệ trục tọa độ, hãy kiểm tra xem 3 điểm này có cùng nằm trên một đường thẳng (cùng hàm số) hay không. Nếu có hãy trả về True còn không thì False.

Ví dụ:

Với coordinates = [[1, 1], [2, 2], [3, 3]] thì collinear(coordinates) = True
Với coordinates = [[0, 1], [1, 2], [1, 3]] thì colinear(coordinates) = False
[Đầu vào/Đầu ra]:

[Thời gian chạy] 0.5s với C++, 3s với Java và C#, 4s với Python, Go và JavaScript.
[Đầu vào] Matrix of Integers
-10^12 < coordinates[i][j] < 10^12
coordinates.length() = 3
[Đầu ra] Boolean
True nếu 3 điểm nằm trên cùng một đường thẳng, ngược lại thì False
Gợi ý:

Đừng bao giờ tin vào gợi ý
