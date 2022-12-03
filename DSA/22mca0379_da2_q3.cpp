#include<iostream>

using namespace std;
struct node {
        int data;
        struct node * left;
        struct node * right;
        node(int val) {
                data = val;
                left = 0;
                right = 0;
        }
};
void InOrder(struct node * root) {
        if (root == 0) {
                return;
        }
        InOrder(root -> left);
        cout << root -> data << " ";
        InOrder(root -> right);
}
void PreOrder(struct node * root) {
        if (root == 0) {
                return;
        }
        cout << root -> data << " ";
        PreOrder(root -> left);
        PreOrder(root -> right);
}
void PostOrder(struct node * root) {
        if (root == 0) {
                return;
        }
        PostOrder(root -> left);
        PostOrder(root -> right);
        cout << root -> data << " ";
}
int main() {
        cout << "\n\n22MCA0379 Shubham Singh" << endl;
        struct node * root = new node(100);
        root -> left = new node(90);
        root -> right = new node(80);
        root -> left -> left = new node(70);
        root -> left -> right = new node(60);
        root -> right -> left = new node(50);
        root -> right -> right = new node(40);
        cout << "\n\nInorder Traversal: " << endl;
        InOrder(root);
        cout << "\n\nPreorder Traversal: " << endl;
        PreOrder(root);
        cout << "\n\nPostorder Traversal: " << endl;
        PostOrder(root);
        return 0;
}