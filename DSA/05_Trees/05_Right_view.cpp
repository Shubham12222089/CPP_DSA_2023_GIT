#include<iostream>
#include<queue>
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

void Rightview(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i = 0;i<n;i++){
            Node* curr = q.front();
            q.pop();

            if(i==n-1){
                cout<<curr->data<<" ";
            }

            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }

        
    }
}

int main(){
    Node* root=new Node(10);
    root->left=new Node(8);
    root->right=new Node(15);

    root->left->left=new Node(7);
    root->left->right=new Node(9);
    root->right->right=new Node(17);

    Rightview(root);
}