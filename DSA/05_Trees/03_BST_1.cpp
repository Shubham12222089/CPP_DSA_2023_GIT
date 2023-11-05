// #include<iostream>
// using namespace std;

// /*
//     rule 1:- the left subtree of a  node conatains only nodes
//     with keys less than the node's key.

//     rule2:- the right subtree of  a node contains only nodes
//     with keys greater than the node's key.

//     rule3:- the left and right subtre must also be a
//     binary search tree. there must be no dulicate values.
// */

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// Node* insertBST(Node* root,int val){
//     if(root==NULL){
//         return new Node(val);
//     }
//     if(val < root->data){
//         root->left=insertBST(root->left,val);
//     }
//     else{
//         root->right = insertBST(root->right,val);
//     }
//     return root;
// }
// void inorder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout << root->data <<" ";
//     inorder(root->right);
// }

// Node* INorderSuccessor(Node* root){
//     Node* curr = root;
//     while(curr && curr->left != NULL){
//         curr=curr->left;
//     }
//     return curr;
// }

// Node* deleteInBST(Node* root,int key){
//     if(key < root->data){
//         root->left = deleteInBST(root->left, key);
//     }
//     else if(key>root->data){
//         root->right = deleteInBST(root->right, key);
//     }
//     else{
//         if(root->left == NULL){
//             Node* temp=root->right;
//             delete root;
//             return temp;
//         }
//         else if(root->right == NULL){
//             Node* temp=root->left;
//             delete root;
//             return temp;

//         }
//         //case 3
//         Node* temp=INorderSuccessor(root->right);
//         root->data = temp->data;
//         root->right = deleteInBST(root->right,temp->data);
    
//     }
//     return root;

// }

// int count(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return 1 + count(root->left) + count(root->right);
// }


// int main(){
//     Node* root = NULL;

//     root = insertBST(root,5); // assigning root
//     insertBST(root,1);
//     insertBST(root,3);
//     insertBST(root,4);
//     insertBST(root,2);
//     insertBST(root,7);

//     inorder(root);
//     cout<<endl;
//     cout << "Number of nodes : "<<count(root);

// }

#include <iostream>
#include <vector>
#include <algorithm>

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void inOrderTraversal(Node* root, std::vector<int>& values) {
    if (root == nullptr) {
        return;
    }

    inOrderTraversal(root->left, values);
    values.push_back(root->data);
    inOrderTraversal(root->right, values);
}

bool isBST(Node* root) {
    std::vector<int> values;
    inOrderTraversal(root, values);

    // Check if the values are sorted
    return std::is_sorted(values.begin(), values.end());
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(1);
    root->right = new Node(3);

    if (isBST(root)) {
        std::cout << "It's a BST." << std::endl;
    } else {
        std::cout << "It's not a BST." << std::endl;
    }

    return 0;
}
