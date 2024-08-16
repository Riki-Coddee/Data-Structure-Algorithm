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
void calcPointer(Node *root, Node **first, Node **mid, Node **last, Node **prev){
    if(root == NULL){
        return;
    }
    calcPointer(root->left, first, mid, last, prev);
    if(*prev && root ->data < (*prev)->data){
        if(!*first){
          *first = *prev;
          *mid = root;
        }else{
          *last = root;
        }
    }
    *prev = root;

    calcPointer(root->right, first, mid, last, prev);
    return;
}
void inorderPrint(Node *root){
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
    return;
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
void restroreBST(Node* root){
    if(root == NULL){
        return;
    }
    Node *first, *mid, *last, *prev;
    first = NULL;
    mid = NULL;
    last = NULL;
    prev = NULL;
    calcPointer(root, &first, &mid, &last, &prev);
    if(first && last){
        swap(&(first->data), &(last->data));
    }else{
        swap(&(first->data), &(mid->data));
    }
    return;
}
int main(){
    Node* root = new Node(6);

    root->left = new Node(9);
        root->left->left = new Node(1);
        root->left->right = new Node(4);
        root->right = new Node(3);
        
        root->right->right = new Node(13);

        inorderPrint(root);
        cout<<endl;
        restroreBST(root);
        inorderPrint(root);
    return 0;
}