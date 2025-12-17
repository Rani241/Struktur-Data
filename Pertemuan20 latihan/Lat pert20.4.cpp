#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int value) {
    if(root == NULL) {
        root = new Node();
        root->data = value;
        root->left = root->right = NULL;
        return root;
    }
    if(value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}

void inorder(Node* root) {
    if(root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(Node* root) {
    if(root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node* root) {
    if(root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    Node* root = NULL;
    int data[] = {50, 30, 70, 20, 40, 60, 80};

    for(int x : data)
        root = insert(root, x);

    cout << "Inorder   : ";
    inorder(root);
    cout << "\nPreorder  : ";
    preorder(root);
    cout << "\nPostorder : ";
    postorder(root);

    return 0;
}

