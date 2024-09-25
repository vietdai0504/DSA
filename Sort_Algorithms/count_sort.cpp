#include "bubble_sort.cpp"

void countSort(vector<int>&A, int n) {
    vector<int> B(100,0);
    for (int i=0;i<n;i++) {
        B[A[i]]++;
    }
    int j = 0;
    for (int i=0;i<B.size();i++) {
        while(B[i] > 0) {
            A[j++] = i;
            B[i]--;
        }
    }
}

int main() {
    srand(time(NULL));
    vector<int> A;
    int n = 21;
    for (int i=0;i<n;i++) {
        int a = rand()%100 + 1;
        A.push_back(a);
    }
    cout << "No sort: ";
    for (int x : A) {
        cout << x << " ";
    }
    cout << "\nApply count sort: ";
    countSort(A,n);
    for (int x : A) {
        cout << x << " ";
    }
    cout << "\nApply bubble sort: ";
    bubble(A,n);
    for (int x : A) {
        cout << x << " ";
    }
}