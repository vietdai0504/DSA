#include "heapify.cpp"
void heapSort(int heap[], int heapSize) {
    int sizeofHeap = heapSize-1;
    constructHeap(heap, heapSize);
    for (int i=sizeofHeap;i>=0;i--) {
        swap(heap[0],heap[i]);
        Heapify(heap,0,i);
    }
}
int main() {
    int arr[] = {4,5,2,3,7,8,9,1,10,19};
    for (int x:arr) {
        cout << x <<" ";
    }
    cout << endl;
    heapSort(arr, sizeof(arr)/sizeof(int));
    for (int x:arr) {
        cout << x <<" ";
    }
}