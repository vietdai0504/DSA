#include <iostream>
using namespace std;
struct Node{
    int key;
    Node* left, *right;
};
Node* newNode(int x) {
    Node* temp = new Node;
    temp->key = x;
    temp->left = temp->right = NULL;
    return temp;
}
Node* insertNode(Node* root, int x) {
    if (root == NULL) {
        return newNode(x);
    }
    if (root->key > x) {
        root->left = insertNode(root->left, x);
    }
    else {
        root->right = insertNode(root->right, x);
    }
    return root;
}
Node* findMin(Node* root) {
    if (root==NULL) return root;
    while (root->left!=NULL) {
        root = root->left;
    }
    return root;
}
void inorder(Node* node) {
    if (node!=NULL) {
        inorder(node->left);
        cout << node->key << " ";
        inorder(node->right);
    }
}
Node* deleteNode(Node* root, int x) {
    if (root==NULL) return root;
    if (root->key > x) {
        root->left = deleteNode(root->left,x);
    }
    else if (root->key < x) {
        root->right = deleteNode(root->right,x);
    }
    else {
        Node* p = root;
        if (root->left == NULL) {
            root = root->right;
            delete p;
        }
        else if (root->right == NULL) {
            root = root->left;
            delete p;
        }
        else {
            Node* temp = findMin(root->right);
            root->key = temp->key;
            root->right = deleteNode(root->right, temp->key);
        }
    }
    return root;
}
Node* findSecondMax(Node* root) {
    if (root==NULL) return root;
    Node *p = root;
    Node* parent = NULL;
    while (p->right != NULL) {
        parent = p;
        p = p->right;
    }
    if (p->left != NULL) {
        p = p->left;
        while (p->right != NULL) {
            p = p->right;
        }
        return p;
    }
    return parent;
}
Node* findSuccesor(Node* root, int k) { // tìm node successor của node có giá trị bằng k
    if (root==NULL) return root;
    Node* p = root;
    while (p->key != k) {
        if (p->key > k) {
            p = p->left;
        }
        else {
            p = p->right;
        }
    }
    Node* successor = NULL;
    if (p->right != NULL) {
        return findMin(p->right);
    }
    else {
        while (root!=NULL && root->key != k) {
            if (root->key > k) {
                successor = root;
                root = root->left;
            }
            else {
                root = root->right;
            }
        }
    }
    return successor;
}
int main() {
    int arr[] = {5,4,2,6,7,10,32,3,19,11};
    int n = sizeof(arr)/sizeof(int);
    Node* node = NULL;
    for (int i=0;i<n;i++) {
        node = insertNode(node,arr[i]);
    }
    inorder(node);
    cout << endl;
    deleteNode(node,19);
    inorder(node);
    cout << "\nSecond Max: " << findSecondMax(node)->key << " " << endl;
    Node* successor = findSuccesor(node,32);
    if (successor != NULL)
        cout << "Successor: " << successor->key << " ";
    else {
        cout << "Not found successor for this node";
    }
}