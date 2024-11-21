#include <iostream>
using namespace std;
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void heapify(int heap[], int i, int sizeHeap) {
    int max=i, left = 2*i+1, right = 2*i+2;
    if (left < sizeHeap && heap[left] > heap[i]) {
        max = left;
    }
    if (right < sizeHeap && heap[right] > heap[max]) {
        max = right;
    }
    if (max!=i) {
        swap(heap[max],heap[i]);
        heapify(heap,max,sizeHeap);
    }
}
void buildHeap(int heap[], int sizeHeap) {
    for (int i=sizeHeap/2;i>=0;i--) {
        heapify(heap,i,sizeHeap);
    }
}
void heapSort(int heap[], int sizeHeap) {
    buildHeap(heap,sizeHeap);
    for (int i=sizeHeap-1;i>=0;i--) {
        swap(heap[0],heap[i]);
        heapify(heap,0,i);
    }
}
int main() {
    int heap[] = {4,5,2,7,8,10,54,3,1};
    int sizeHeap = sizeof(heap)/sizeof(int);
    // buildHeap(heap,sizeHeap);
    heapSort(heap,sizeHeap);
    for (int x : heap) {
        cout << x << " ";
    }
}