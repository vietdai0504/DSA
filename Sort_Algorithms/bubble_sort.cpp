#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
void swap(int &a, int & b) {
    int temp = a;
    a = b;
    b = temp;
}
void bubble(vector<int>& A, int n) {
    for (int i=0;i<n-1;i++) {
        for (int j=i;j<n;j++) {
            if (A[i] > A[j]) {
                swap(A[i],A[j]);
            }
        }
    }
}
int main() {
    srand(time(NULL));
    vector<int> A;
    int n = 20;
    for (int i=0;i<n;i++) {
        int a = rand() % 100 + 1;
        A.push_back(a);
    }
    cout << "No sort: ";
    for (int x : A) {
        cout << x << " ";
    }
    bubble(A,n);
    cout << "\nApply bubble sort: ";
    for (int x : A) {
        cout << x << " ";
    }
}
