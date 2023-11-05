// #include <iostream>
// #include <queue>
// using namespace std;

// class Node {
// public:
//   int data;
//   Node* left;
//   Node* right;

  
//   Node(int val) {
//     data = val;
//     left = nullptr;
//     right = nullptr;
//   }
// };

// int sumAtKth(Node* root, int k) {
//   queue<Node*> q;
//   q.push(root);
//   int sum = 0;
//   int level = 0;

//   while (!q.empty()) {
//     int CurrentLevel = q.size();
//     level++;

//     while (CurrentLevel--) {
//       Node* node = q.front();
//       q.pop();

//       if (level == k) {
//         sum += node->data;
//       }

//       if (node->left!=NULL) {
//         q.push(node->left);
//       }
//       if (node->right!=NULL) {
//         q.push(node->right);
//       }
//     }

//     if (level >= k) {
//       break;
//     }
//   }

//   return sum;
// }

// int main() {
//   Node* root = new Node(1);
//   root->left = new Node(2);
//   root->right = new Node(3);

//   root->left->left = new Node(4);
//   root->left->right = new Node(5);
//   root->right->left = new Node(6);
//   root->right->right = new Node(7);

//   int n = sumAtKth(root, 3);
//   cout << "Sum is: " << n << endl;

//   return 0;
// }

// Online C++ compiler to run C++ program online
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
Node* searchInBST(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    else if(root->data < key){
        return searchInBST(root->right,key);
    }
    return searchInBST(root->left,key);

}

Node* insertion(Node* root,int key){
    if(root==NULL){
        return new Node(key);
    }
    if(root->data > key){
        root->left = insertion(root->left,key);
    }
    else if(root->data < key){
        root->right = insertion(root->right,key);
    }
    return root;
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
    if(searchInBST(root,n)){
        cout<<"element exist";
    }
    else{
        cout<<"Not exist";
    }
    cout<<endl;
    cout<<"After insertion : ";
    root = insertion(root,5);
    inorder(root);
    
    

    return 0;
}