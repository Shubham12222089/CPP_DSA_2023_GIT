// #include<iostream>
// using namespace std;

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

// Node* searchinBST(Node* root, int key){
//     if(root==NULL){
//         return NULL;
//     }
//     if(root->data==key){
//         return root;
//     }
//     if(root->data>key){
//         return searchinBST(root->left,key);
//     }
//     else{
//         return searchinBST(root->right,key);
//     }
// }

// int main(){

//     Node* root=new Node(10);
//     root->left=new Node(8);
//     root->right=new Node(15);

//     root->left->left=new Node(7);
//     root->left->right=new Node(9);
//     root->right->right=new Node(17);

//     Node* result = searchinBST(root,0);
//     if(result){
//         cout<<"Yes";
//     }
//     else{
//         cout<<"No";
//     }

// }


#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data= val;
        left=NULL;
        right = NULL;
    }
};

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* search(Node* root,int data){
    if(root == NULL){
        return root;
    }
    if(root->data == data){
        return root;
    }
    else if(root->data > data){
        return search(root->left,data);
    }
    else{
        return search(root->right,data);
    }
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(8);
    root->right= new Node(15);
    
    root->left->left = new Node(7);
    root->left->right = new Node(9);
    
    root->right->right = new Node(17);
    root->right->right->left = new Node(16);
    root->right->right->right = new Node(19);
    
    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;
    
    cout<<"preorder : ";
    preorder(root);
    cout<<endl;
    
    cout<<"postorder : ";
    postorder(root);
    cout<<endl;
    int n;
    cout<<"Enter the value for search : ";
    cin>>n;
    Node* result = search(root,n);
    if(result){
        cout<<n<<" is present in the bst.";
    }
    else{
        cout<<"Not present";
    }
    

    return 0;
}