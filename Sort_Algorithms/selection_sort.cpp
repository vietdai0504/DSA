#include "bubble_sort.cpp"

void selection(vector<int> &A, int n){
    for (int i=0;i<n-1;i++) {
        int min = A[i];
        int index = i;
        for (int j=i;j<n;j++) {
            if (A[j] < min) {
                min = A[j];
                index = j;
            }
        }
        swap(A[index],A[i]);
    }
}

// int main() {
//     srand(time(NULL));
//     vector<int> A;
//     int n = 20;
//     for (int i=0;i<n;i++) {
//         int a = rand()%100 + 1;
//         A.push_back(a);
//     }
//     cout << "No sort: ";
//     for (int x : A) {
//         cout << x << " ";
//     }
//     selection(A,n);
//     cout << "\nApply selection sort: ";
//     for (int x : A) {
//         cout << x << " ";
//     }
//     cout << "\nApply bubble sort: ";
//     bubble(A,n);
//     for (int x : A) {
//         cout << x << " ";
//     }
// }