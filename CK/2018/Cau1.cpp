#include <iostream>
using namespace std;
int h(int k, int i) {
    return (k%10 + i*(7 - k%7))%10;
}
void hashTable(int A[], int hashT[]) {
    for (int i=0;i<6;i++) {
        int j = 0;
        while (j<10) {
            int index = h(A[i], j);
            if (hashT[index] == 0) {
                hashT[index] = A[i];
                break;
            }
            j++;
        }
    }
}
int main() {
    int hashT[10] = {0};
    // for (int i=0;i<10;i++) {
    //     cout << hashT[i] << " ";
    // }
    int A[6] = {2017, 3269, 1345, 6712, 1089, 9674};
    hashTable(A, hashT);
    for (int i=0;i<10;i++) {
        cout << "Index: " << i << " Value: " << hashT[i] << endl;
    }
}