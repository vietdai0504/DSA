#include "create_traversal.cpp"

Node* findSecondMax(Node* node) {
    if (!node || (!node->left && !node->right)) {
        return NULL;
    }
    if (node->right) {
        if (!node->right->left && !node->right->right) {
            return node;
        }
        else {
            return findSecondMax(node->right);
        }
    }
    node = node->left;
    while (node->right) {
        node = node->right;
    }
    return node;
}

int main() {
    int A[34] = {10, 5, 15, 2, 7, 12, 18, 1, 3, 6, 8, 11, 13, 16, 19, 0, 4, 9, 14, 17, 20, 25, 22, 27, 21, 23, 26, 28, 29, 30, 31, 32, 33};
    Node* node = NULL;
    for (int i=0;i<4;i++) {
        node = insertNode(node, A[i]);
    }
    Node* a = findSecondMax(node);
    cout<<"max 2th: "<<a->key;
    cout<<endl;
}