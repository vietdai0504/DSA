#include "bubble_sort.cpp"

int partition(vector<int>& A, int left, int right) {
    int j = left;
    int pivot = right - 1;
    for (int i=left;i<right - 1;i++) {
        if (A[i] < A[pivot]) {
            swap(A[i],A[j]);
            j++;
        }
    }
    swap(A[j],A[pivot]);
    return j;
}

void quickSort(vector<int>& A, int left, int right) {
    if (left < right) {
        int mid = partition(A,left,right);
        quickSort(A,left,mid);
        quickSort(A,mid+1,right);
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
//     quickSort(A,0,n);
//     cout << "\nApply quickSort: ";
//     for (int x : A) {
//         cout << x << " ";
//     }
//     cout << "\nApply bubble sort: ";
//     bubble(A,n);
//     for (int x : A) {
//         cout << x << " ";
//     }
// }