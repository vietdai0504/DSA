#include <iostream>
#include <vector>
using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

void Heapify(vector<char> &arr, int i, int sizeHeap) {
    int max = i, left = 2 * i + 1, right = 2 * i + 2;
    
    if (left < sizeHeap && arr[left] > arr[max]) {
        max = left;
    }
    if (right < sizeHeap && arr[right] > arr[max]) {
        max = right;
    }
    if (max != i) {
        swap(arr[i], arr[max]);
        Heapify(arr, max, sizeHeap);
    }
}

void constructMaxHeap(vector<char> &arr) {
    int sizeHeap = arr.size();
    for (int i = sizeHeap / 2 - 1; i >= 0; i--) {
        Heapify(arr, i, sizeHeap);
    }
}

int main() {
    vector<char> arr = {'C', 'O', 'M', 'P', 'L', 'E', 'X', 'I', 'T', 'Y'};
    constructMaxHeap(arr);
    for (char x : arr) {
        cout << x << " ";
    }
    return 0;
}
