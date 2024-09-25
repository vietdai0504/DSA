#include "bubble_sort.cpp"

void merge(vector<int>& A, int left, int right) {
    int mid = left + (right - left) / 2;
    int n1 = mid-left+1, n2=right-mid;
    int* arrLeft = new int[n1];
    int* arrRight = new int[n2];
    for (int i=0;i<n1;i++) {
        arrLeft[i] = A[left+i];
    }
    for (int i=0;i<n2;i++) {
        arrRight[i] = A[1+i+mid];
    }
    int i = 0, j = 0, k = left;
    while (i<n1 && j<n2) {
        if (arrLeft[i] < arrRight[j]) {
            A[k++] = arrLeft[i++];
        }
        else {
            A[k++] = arrRight[j++];
        }
    }
    while (i<n1) {
        A[k++] = arrLeft[i++];
    }
    while (i<n2) {
        A[k++] = arrRight[j++];
    }
    delete[] arrLeft;
    delete[] arrRight;
}

void mergeSort(vector<int>& A, int left, int right) {
    if (left < right) {
        int mid = left + (right - left)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid+1,right);
        merge(A,left,right);
    }
}

// int main() {
//     srand(time(NULL));
//     vector<int> A;
//     int n = 21;
//     for (int i=0;i<n;i++) {
//         int a = rand()%100 + 1;
//         A.push_back(a);
//     }
//     cout << "No sort: ";
//     for (int x : A) {
//         cout << x << " ";
//     }
//     cout << "\nApply merge sort: ";
//     mergeSort(A,0,n);
//     for (int x : A) {
//         cout << x << " ";
//     }
//     cout << "\nApply bubble sort: ";
//     bubble(A,n);
//     for (int x : A) {
//         cout << x << " ";
//     }
// }