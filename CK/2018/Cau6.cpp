#include <iostream>
#include <ctime>
#include <random>
using namespace std;
// Câu 6, ở đây dùng QuickSort, có thể dùng Bubble, Insert, Heap, Merge Sort ...
void swap(int&a, int&b) {
    int temp = a;
    a = b;
    b = temp;
}
int partition(int A[], int left, int right) {
    int pivot = right-1;
    int j = left;
    for (int i=left;i<right-1;i++) {
        if (A[i] < A[pivot]) {
            swap(A[i],A[j]);
            j++;
        }
    }
    swap(A[j],A[pivot]);
    return j;
}
void quickSort(int A[], int left, int right) {
    if (right > left) {
        int p = partition(A, left, right);
        quickSort(A, left, p);
        quickSort(A, p+1, right);
    }
}
//
// int main() {
//     srand(time(NULL));
//     const int n = 10;
//     int A[n];
//     for (int i=0;i<n;i++) {
//         A[i] = rand() % 100 + 1;
//         cout << A[i] << " ";
//     }
//     cout << endl;
//     quickSort(A, 0, n);
//     for (int x:A) {
//         cout << x << " ";
//     }
// }