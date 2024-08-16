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
int countNode(Node* root){
    if(root == NULL){
        return 0;
    }
    return (countNode(root->left) + countNode(root->right) + 1);
}
// o{n^2}
// int height(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//     int lh = height(root->left);
//     int rh = height(root->right);
//     return max(lh, rh) +1;
// }
// bool isBalancedTree(Node* root){
//     if(root == NULL){
//         return true;
//     }
//     if(isBalancedTree(root->left) == false){
//         return false;
//     }
//     if(isBalancedTree(root->right) == false){
//         return false;
//     }

//     int lh = height(root->left);
//     int rh = height(root->right);
//     if(abs(lh-rh)<=1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// o{n}
bool isBalancedTree(Node* root, int* height){
    if(root == NULL){
        *height = 0;
        return true;
    }
    int lh = 0, rh = 0;
    if(isBalancedTree(root->left, &lh)==false){
        return false;
    }
    if(isBalancedTree(root->right, &rh)==false){
        return false;
    }
    *height = max(lh, rh) + 1;
    if(abs(lh - rh)<= 1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
     
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
        // Node* root = new Node(1);
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
        Node* root = new Node(1);
        root->left = new Node(2);
        root->left->left = new Node(3);
        root->left->right = new Node(4);
        root->left->left->left = new Node(5);
        root->left->left->left->left = new Node(7);
        root->left->right->right = new Node(6);

        // Node* root = new Node(1);
        // root->left = new Node(2);
        // root->right = new Node(3);
        // root->left->left = new Node(4);
        // root->right->right = new Node(5);
        int height = 0;
        if(isBalancedTree(root, &height)){
            cout<<"Balanced Tree"<<endl;
        }
        else{
            cout<<"Unbalanced Tree"<<endl;
        }
    return 0;
}