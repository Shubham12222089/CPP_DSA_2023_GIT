#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
  int data;
  Node* left;
  Node* right;

  // Constructor to initialize data, left, and right pointers
  Node(int val) {
    data = val;
    left = nullptr;
    right = nullptr;
  }
};

int sumAtKth(Node* root, int k) {
  queue<Node*> q;
  q.push(root);
  int sum = 0;
  int level = 0;

  while (!q.empty()) {
    int CurrentLevel = q.size();
    level++;

    while (CurrentLevel--) {
      Node* node = q.front();
      q.pop();

      if (level == k) {
        sum += node->data;
      }

      if (node->left!=NULL) {
        q.push(node->left);
      }
      if (node->right!=NULL) {
        q.push(node->right);
      }
    }

    if (level >= k) {
      break;
    }
  }

  return sum;
}

int main() {
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);

  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);

  int n = sumAtKth(root, 3);
  cout << "Sum is: " << n << endl;

  return 0;
}

