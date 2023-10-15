#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* searchinBST(Node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key){
        return searchinBST(root->left,key);
    }
    else{
        return searchinBST(root->right,key);
    }
}

int main(){

    Node* root=new Node(10);
    root->left=new Node(8);
    root->right=new Node(15);

    root->left->left=new Node(7);
    root->left->right=new Node(9);
    root->right->right=new Node(17);
}