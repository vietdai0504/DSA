#include <iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void Heapify(int arr[], int i, int sizeHeap) {
    int max=i, left = 2*i+1, right = 2*i+2;
    if (left < sizeHeap && arr[left] > arr[i]) {
        max = left;
    }
    if (right < sizeHeap && arr[right] > arr[max]) {
        max = right;
    }
    if (max!=i) {
        swap(arr[i],arr[max]);
        Heapify(arr,max, sizeHeap);
    }
}
void contructHeap(int arr[], int sizeHeap) {
    // int sizeHeap = sizeof(arr)/sizeof(int);
    for (int i=sizeHeap/2;i>=0;i--) {
        Heapify(arr,i,sizeHeap);
    }
}
int main() {
    int arr[] = {12, 3, 13, 23, 45, 11, 10, 6, 7};
    int sizeHeap = sizeof(arr)/sizeof(int);
    cout << sizeHeap << endl;
    contructHeap(arr,sizeHeap);
    for (int x:arr) {
        cout << x << " ";
    }
}