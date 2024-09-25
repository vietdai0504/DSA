#include "bubble_sort.cpp"

void insert(vector<int>& A, int n) { // A = {35 42 68 1 70 25 79 59}
    for (int i=1;i<n;i++) {
        int j = i - 1;
        int key = A[i];
        while (j>=0 && key < A[j]) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

// int main() {
//     srand(time(NULL));
//     vector<int> A;
//     int n = 20;
//     for (int i=0;i<n;i++) {
//         int a = rand() % 100 + 1;
//         A.push_back(a);
//     }
//     cout << "No sort: ";
//     for (int x : A) {
//         cout << x << " ";
//     }
//     insert(A,n);
//     cout << "\nApply insert sort: ";
//     for (int x : A) {
//         cout << x << " ";
//     }
// }