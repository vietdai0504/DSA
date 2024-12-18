// mảng n phần tử sắp xếp tăng dần phần chẵn nằm trái và lẻ nằm phải
#include "2018\Cau6.cpp"
using namespace std;

// Cau 3
void sortOddEven(int A[], int n) {
    int j = 0;
    for (int i=0;i<n;i++) {
        if (A[i] % 2 == 0) {
            swap(A[j],A[i]);
            j++;
        }
    }
    quickSort(A, 0, j);
    quickSort(A, j, n);
}
//

int main() {
    srand(time(NULL));
    const int n = 10;
    int A[n];
    for (int i=0;i<n;i++) {
        A[i] = rand() % 100 + 1;
        cout << A[i] << " ";
    }
    cout << endl;
    sortOddEven(A,n);
    // quickSort(A, 0, n);
    for (int x:A) {
        cout << x << " ";
    }
}