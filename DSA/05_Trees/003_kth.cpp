#include <iostream>
#include <vector>
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

void inorder(Node* root,vector<int> &v) {
    if (root == NULL) {
        return;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);

}

void kth(Node* root,int key){
    vector<int> v;
    inorder(root,v);
    if(key>0 && key<=v.size()){
        cout<<v[key-1];
    }else{
        cout<<"Invalid key value";
    }
}

int main() {
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);
    int n;
    
    cout<<"Enter the number : ";
    cin>>n;
    cout<<n<<"-th min number is : ";
    kth(root,n);
    
    return 0;
}
