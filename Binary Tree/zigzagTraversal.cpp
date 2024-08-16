#include<iostream>
#include<stack>
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
void zigzag(Node* root){
    if(root == NULL){
        return;
    }
    stack<Node*> currLevel;
    stack<Node*> nextLevel;
    bool leftToRight = false;
    
    currLevel.push(root);
    while (!currLevel.empty())
    {
    Node* temp = currLevel.top();
    currLevel.pop();
    if(temp){
        cout<<temp->data<<" ";

        if(leftToRight){
            if(temp->left){
                nextLevel.push(temp->left);
            }
            if(temp->right){
                nextLevel.push(temp->right);
            }
        }
        else{
            if(temp->right){
                nextLevel.push(temp->right);
            }
            if(temp->left){
                nextLevel.push(temp->left);
            }
        }
    }   
        if(currLevel.empty()){
            leftToRight = !leftToRight;
            swap(currLevel, nextLevel);
        }
    }
    
}
int main(){
    //      1
    //     /  \
    //     2  3
    //    /\  /\
    //    4 5 6 7
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    zigzag(root);
     return 0;
}