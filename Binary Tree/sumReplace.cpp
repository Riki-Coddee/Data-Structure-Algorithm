#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
void sumReplace(Node* root){
    if(root == NULL){
        return;
    }
    sumReplace(root->left);
    sumReplace(root->right);
    if(root->left != NULL){
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }
}
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main(){
     Node* root = new Node(1);
     /*
               1
             /    \
            6      3
           / \    / \
          9   1   2  1
             /     \  
            2       6
           / \       \
          3   5       7
*/
    // root->left = new Node(6);
    // root->left->left= new Node(9);
    // root->left->right= new Node(1);
    // root->left->right->left= new Node(2);
    // root->left->right->left->left= new Node(3);
    // root->left->right->left->right= new Node(5);
    // root->right = new Node(3);
    // root->right->left=new Node(2);
    // root->right->right=new Node(1);
    // root->right->left->right=new Node(6);
    // root->right->left->right->right=new Node(7);
    /*
                  1
                 /
                2
              /  \
             3    4
            /      \
           5        6
          /
         7
         */
        root->left = new Node(2);
        root->left->left = new Node(3);
        root->left->right = new Node(4);
        root->left->left->left = new Node(5);
        root->left->left->left->left = new Node(7);
        root->left->right->right = new Node(6);
        preOrder(root);
    cout<<endl;
        sumReplace(root);
        preOrder(root);
    return 0;
}