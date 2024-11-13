#include <iostream>
using namespace std;
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void heapify(int heap[], int i, int heapSize) {
    int max = i, left = 2*i+1, right = 2*i+2;
    if (left < heapSize && heap[left] > heap[i]){
        max = left;
    }
    if (right < heapSize && heap[right] > heap[max]){
        max = right;
    }
    if (max!=i) {
        swap(heap[max], heap[i]);
        heapify(heap, max, heapSize);
    }
}
void buildHeap(int heap[], int heapSize) {
    for (int i=heapSize/2;i>=0;i--) {
        heapify(heap, i, heapSize);
    }
}
int main() {
    int heap[] = {3,6,78,2,3,5,9,10,34};
    int heapSize = sizeof(heap)/sizeof(int);
    for (int x:heap) {
        cout << x << " ";
    }
    cout << endl;
    buildHeap(heap,heapSize);
    for (int x:heap) {
        cout << x << " ";
    }
}