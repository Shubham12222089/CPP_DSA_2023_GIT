#include<iostream>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;
    int height;
};

int height(Node* n) {
    if (n == NULL) {
        return 0;
    }
    return n->height;
}

Node* newNode(int key) {
    Node* node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

int getbalancefactor(Node* node) {
    if (node == NULL) {
        return 0;
    }
    return height(node->right) - height(node->left);
}

Node* leftrotate(Node* y) {
    Node* x = y->right;
    Node* T2 = x->left;

    x->left = y;
    y->right = T2;

    y->height = max(height(y->right), height(y->left)) + 1;
    x->height = max(height(x->right), height(x->left)) + 1;

    return x; // Return the new root node after the rotation
}

Node* rightrotate(Node* x) {
    Node* y = x->left;
    Node* T2 = y->right;

    y->right = x;
    x->left = T2;

    x->height = max(height(x->right), height(x->left)) + 1;
    y->height = max(height(y->right), height(y->left)) + 1;

    return y; // Return the new root node after the rotation
}

Node* insert(Node* node, int key) {
    if (node == NULL) {
        return newNode(key);
    }

    if (key < node->key) {
        node->left = insert(node->left, key);
    }
    else if (key > node->key) {
        node->right = insert(node->right, key);
    }
    else {
        return node; // Duplicate keys are not allowed, return as is
    }

    // Update height
    node->height = 1 + max(height(node->left), height(node->right));

    int balance = getbalancefactor(node);

    // Left-Left Case
    if (balance < -1 && key < node->left->key) {
        return rightrotate(node);
    }
    // Right-Right Case
    if (balance > 1 && key > node->right->key) {
        return leftrotate(node);
    }
    // Left-Right Case
    if (balance < -1 && key > node->left->key) {
        node->left = leftrotate(node->left);
        return rightrotate(node);
    }
    // Right-Left Case
    if (balance > 1 && key < node->right->key) {
        node->right = rightrotate(node->right);
        return leftrotate(node);
    }
    return node;
}

int main() {
    Node* root = NULL;
    root = insert(root, 45);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 8);
    root = insert(root, 46); // Changed to 46 to avoid duplicate key
    return 0;
}
