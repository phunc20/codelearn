Character limit: 3000
Bạn là nhân viên công tác tại một công viên bảo tồn động vật. Vào mùa đông, nơi này thường có các chim di cư đến bay đến, và chúng sẽ rời đi vào mùa hạ, để tìm hiểu sự đa dạng sinh học của môi trường công viên bảo tồn cùng với điều kiện sinh sống phù hợp của từng loài chim, bạn lập một danh sách thống kê các loài chim đến và đi theo từng ID của nó, list_of_birds[i] là ID của con chim bay đến thứ i. Hãy cho biết môi trường của khu công viên bảo tồn thích hợp nhất với loài chim nào.

Chú ý:

ID của mỗi loại được thể hiện bằng số nguyên.
Môi trường của khu công viên sẽ thích hợp nhất với loại chim có nhiều con bay đến nhất.
Nếu có hai loại chim thích hợp với môi trường khu công viên như nhau, hãy lấy loại có ID nhỏ hơn.
Ví dụ:

list_of_birds = [1, 4, 5, 4, 4, 3] thì migratory_birds(list_of_birds) = 4.
Giải thích: Có 4 loại chim cùng đến: Loại 1, Loại 3, Loại 4 và Loại 5. Trong đó, loại chim có nhiều con cùng đến nhất là loại 4.
Loại 1 đến 1 con
Loại 3 đến 1 con
Loại 4 đến 3 con
Loại 5 đến 1 con
Đầu vào/Đầu ra:

[Thời gian chạy] 0.5s với C++, 3s với Java và C#, 4s với Python, Go và JavaScript.

[Đầu vào] Array of Integers 
1 <= list_of_birds.length <= 10^6
0 <= list_of_birds[i] <= 10^7

[Đầu ra] Integer
