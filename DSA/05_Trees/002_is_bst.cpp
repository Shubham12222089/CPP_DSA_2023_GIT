// void inorder(Node* root,vector<int> &result){
//         if(root==NULL){
//             return;
//         }
//         inorder(root->left,result);
//         result.push_back(root->data);
//         inorder(root->right,result);
//     }
//     bool isBST(Node* root) 
//     {
//         vector<int> result;
//         inorder(root,result);
//         for(int i=0;i<result.size();i++){
//             if(result[i]<=result[i-1]){
//                 return false;
//             }
//         }
//         return true;
//     }
//--------------------------------------------
// #include <iostream>
// #include <climits> // for INT_MIN and INT_MAX
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// bool isvalid(Node* root, int min, int max) {
//     if (root == NULL) {
//         return true;
//     }
    
//     if (root->data >= min && root->data <= max) {
//         bool left = isvalid(root->left, min, root->data);
//         bool right = isvalid(root->right, root->data, max);
        
//         return left && right; // Combine results from left and right subtrees
//     }
    
//     return false;
// }

// bool isBst(Node* root) {
//     return isvalid(root, INT_MIN, INT_MAX);
// }

// int main() {
//     Node* root = new Node(10);
//     root->left = new Node(5);
//     root->right = new Node(15);
    
//     bool result = isBst(root);
//     if (result) {
//         cout << "The tree is a BST." << endl;
//     } else {
//         cout << "The tree is not a BST." << endl;
//     }

//     return 0;
// }


//--------------------------------
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* inorder(Node* root,vector<int> &v){
    if(root==NULL){
        return NULL;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
    
}

bool isBst(Node* root) {
    vector<int> v;
    inorder(root,v);
    bool j = is_sorted(v.begin(),v.end());
    return j;
}



int main() {
    Node* root = new Node(8);
    root->left = new Node(9);
    root->right = new Node(10);
    root->left->left = new Node(1);
    root->left->right = new Node(6);
    root->right->right = new Node(14);
    
    if (isBst(root)) {
        cout << "The tree is a BST." << endl;
    } else {
        cout << "The tree is not a BST." << endl;
    }

    return 0;
}
