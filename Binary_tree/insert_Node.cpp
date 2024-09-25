#include "create_traversal.cpp"

void insertNode(Node* root, Node* z) {
    Node* x = root, *y = NULL;
    while (x!=NULL) {   // tìm vị trí node sẽ là parent node cần chèn
        y = x;
        if (z->key < x->key) {
            x = x->left;
        }
        else {
            x = x->right;
        }
    }
    //chèn node vào cây
    if (!y) {
        root = z;
    }
    else if(z->key < y->key) {
        y->left = z;
    }
    else {
        y->right = z;
    }
}

int main() {
    int A[10] = {8,3,5,6,9,10,44,2,7,20};
    int n = sizeof(A)/sizeof(A[0]);
    Node* node = NULL;
    for (int i=0;i<n;i++) {
        node = insertNode(node, A[i]);
    }
    Node* z = newNode(11);
    inorder(node);
    insertNode(node, z);
    cout << endl;
    inorder(node);
}