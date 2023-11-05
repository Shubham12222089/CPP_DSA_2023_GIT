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

// int findKthLargestElement(Node* root, int k) {
//     vector<int> elements;
//     inorder(root, elements);

//     if (k >= 1 && k <= elements.size()) {
//         return elements[elements.size() - k];
//     } else {
//         // Handle the case when k is out of range
//         return -1;
//     }
// }

int main() {
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    // int k;
    // cin >> k;
    // int kthLargestElement = findKthLargestElement(root, k);

    // if (kthLargestElement != -1) {
    //     cout << "The " << k << "-th largest element is: " << kthLargestElement << endl;
    // } else {
    //     cout << "Invalid k value or out of range." << endl;
    // }
    vector<int> s;
    inorder(root,s);
    for(auto i : s){
        cout<<i<<" ";
    }
    return 0;
}
