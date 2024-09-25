#include "create_traversal.cpp"
#include "find_max_and_max2th.cpp"

Node* findSuccessor(Node* root, Node* x) {
    if (x->right) {
        return findMin(x->right);
    }
    Node* successor=NULL;
    while (root != NULL && x->key != root->key) {
        if (x->key < root->key) {
            successor = root;
            root = root->left;
        }
        else if (x->key > root->key) {
            root = root->right;
        }
    }
    return successor;
}

// int main() {
//     int A[10] = {8,3,5,6,9,10,44,302,10,17};
//     int n = sizeof(A)/sizeof(A[0]);
//     Node* node = NULL;
//     for (int i=0;i<n;i++) {
//         node = insertNode(node, A[i]);
//     }
//     Node* x = find_K(node, 44);
//     cout << "Node: " << x->key << endl;
//     Node* succ = findSuccessor(node, x);
//     if (!succ) {
//         cout << "Not found";
//     }
//     else
//         cout << "Successor: "<< succ->key;
// }