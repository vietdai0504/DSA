#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int A[1000];
bool isCheck(int A[], int n) // hàm kiểm tra - câu 1.a
{
    if (n>100) {
        return true;
    }
    int B[101] = {0};
    for (int i=0;i<n;i++) {
        B[A[i]]++;
    }
    cout <<endl;
    for (int i=0;i<101;i++) {
        // cout << B[i] << " ";
        if (B[i] > 1) {
            return true;
        }
    }
    return false;
}
int main() {
    srand(time(NULL));
    int n;
    cout << "Nhap n: "; cin>>n;
    for (int i=0;i<n;i++) {
        A[i] = rand() % 100 +1;
    }
    for (int i=0;i<n;i++) {
        cout << A[i] << " ";
    }
    if (isCheck(A,n)) {
        cout << "True";
    }
    else {
        cout << "False";
    }
}

// Câu 1.b
/*
- Note: Chỉ xét tới hàm isCheck()
+ Lần so sánh đầu tiên n > 100 -> 1 phép so sánh
+ Vòng lặp đầu tiên i = 0, i<n -> n + 1 phép so sánh (n lần lặp + 1 lần so sánh khi i=n)
+ Vòng lặp cuối i = 0, i<101 -> 101 + 1 phép so sánh -> trường hợp xấu nhất
                             -> 1 + 1 phép so sánh (i < 101 và B[i] > 1 đúng ngay lần đầu)       
=> TỔNG: Trường hợp xấu nhất: (1) + (n+1) + (101+1) = n + 104 phép so sánh
         Trường hợp tốt nhất: 1 phép so sánh (nếu n>100)
*/
