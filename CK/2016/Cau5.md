- v = [] -> tập hợp đỉnh đã thăm
- u = [v1, v2, v3, v4, v5, v6] -> tập hợp các đỉnh chưa thăm
Bắt đầu thuật toán Prim:
Step1:
+ v = [v1] // bắt đầu từ đỉnh v1
+ u = [v2, v3, v4, v5, v6]
Step2:
+ So sánh v1 tới v2, v3, v4, v5, v6 -> 5 phép so sánh
+ v = [v1, v2] // = khoảng cách lấy ưu tiên theo thứ tự, tùy quy định của đề
+ u = [v3, v4, v5, v6]
Step3:
+ So sánh v1 tới v3, v4, v5, v6 -> 4 phép so sánh
+ v = [v1, v2, v3]
+ u = [v4, v5, v6]
Step4:
+ So sánh v1 tới v4, v5, v6 -> 3 phép so sánh
+ v = [v1, v2, v3, v4]
+ u = [v5, v6]
Step5:
+ So sánh v1 tới v5, v6 -> 2 phép so sánh
+ v = [v1, v2, v3, v4, v5]
+ u = [v6]
Step6:
+ So sánh v1 tới v6 -> 1 phép so sảnh
+ v = [v1, v2, v3, v4, v5, v6]
+ u = []
--> Tổng số phép so sánh: 5 + 4 + 3 + 2 + 1 = 15