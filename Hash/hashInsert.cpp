#include <iostream>
using namespace std;
int hashFunction(int key, int i) {
    return (key+i)%10 + 1;
}
void insertHashTable(int hashTable[], int key, int sizeofT) {
    int i=0, j;
    do {
        j = hashFunction(key,i);
        if (hashTable[j] == 0) {
            hashTable[j] = key;
            return;
        }
        else {
            i++;
        }
    }
    while (i <= sizeofT);
}
int main() {
    // results: 0 100 21 102 323 64 345 56 3 7123 
    int arr[10] = {100,345,64,323,56,3,21,102,7123,120938};
    int hashTable[10] = {};
    for (int i=0;i<sizeof(arr)/sizeof(int);i++) {
        insertHashTable(hashTable, arr[i], sizeof(hashTable)/sizeof(int));
    }
    for (int x:hashTable) {
        cout << x << " ";
    }
}