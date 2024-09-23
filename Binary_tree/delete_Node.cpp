#include "create_traversal.cpp"
#include "find_max_and_max2th.cpp"

Node* deleteNode(Node* node, int k) {
    if (node == NULL) {
        return node;
    }
    if (node->key > k) {
        node->left = deleteNode(node->left, k);
    }
    else if (node->key < k) {
        node->right = deleteNode(node->right, k);
    }
    else {
        Node* p = node;
        if (node->left == NULL) {
            node = node->right;
            delete p;
        }
        else if (node->right == NULL) {
            node = node->right;
            delete p; 
        }
        else {
            Node* temp = findMin(node->right);
            node->key = temp->key;
            node->right = deleteNode(node->right, temp->key);
        }
    }
    return node;
}

// int main() {
//     int A[10] = {8,3,5,6,9,10,44,2,7,20};
//     int n = sizeof(A)/sizeof(A[0]);
//     Node* node = NULL;
//     for (int i=0;i<n;i++) {
//         node = insertNode(node, A[i]);
//     }
//     cout << "Before delete k: "; inorder(node);
//     cout << endl;
//     node = deleteNode(node, 1);
//     cout << "After delete k: "; inorder(node);
// }