### Thuật toán Prim

**Tập hợp đỉnh đã thăm (v):**  
`v = []` 

**Tập hợp các đỉnh chưa thăm (u):**  
`u = [v1, v2, v3, v4, v5, v6]`

---

### Bắt đầu thuật toán Prim:

#### Step 1:
- `v = [v1]`  // Bắt đầu từ đỉnh `v1`
- `u = [v2, v3, v4, v5, v6]`

#### Step 2:
- So sánh `v1` tới `v2`, `v3`, `v4`, `v5`, `v6` → **5 phép so sánh**
- `v = [v1, v2]`  // Lấy đỉnh ưu tiên theo thứ tự (tùy theo quy định của đề)
- `u = [v3, v4, v5, v6]`

#### Step 3:
- So sánh `v1` tới `v3`, `v4`, `v5`, `v6` → **4 phép so sánh**
- `v = [v1, v2, v3]`
- `u = [v4, v5, v6]`

#### Step 4:
- So sánh `v1` tới `v4`, `v5`, `v6` → **3 phép so sánh**
- `v = [v1, v2, v3, v4]`
- `u = [v5, v6]`

#### Step 5:
- So sánh `v1` tới `v5`, `v6` → **2 phép so sánh**
- `v = [v1, v2, v3, v4, v5]`
- `u = [v6]`

#### Step 6:
- So sánh `v1` tới `v6` → **1 phép so sánh**
- `v = [v1, v2, v3, v4, v5, v6]`
- `u = []`

---

### Tổng số phép so sánh:
```5 + 4 + 3 + 2 + 1 = 15```
