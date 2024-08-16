#include<iostream>
#include<queue>
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

void printLevelOrder(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            cout<<node->data<<" ";
            if(node->left)
               q.push(node->left);
            if(node->right)
               q.push(node->right);
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
    
}
int sumAtLevelK(Node* root, int k){
    if(root == NULL){
        return -1;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;
    while (!q.empty())
    {
        Node* node = q.front();
        q.pop();
        if(node!=NULL){
            if(level == k){
              sum += node->data;
            }
          if(node->left)
           q.push(node->left);

          if(node->right)
          q.push(node->right);
        }
        else if(!q.empty()){
            level ++;
            q.push(NULL);
        }
    }
return sum;
}
int main(){
    Node* root = new Node(5);
    root->left = new Node(6);
    root->left->left= new Node(9);
    root->left->right= new Node(1);
    root->left->right->left= new Node(2);
    root->left->right->left->left= new Node(3);
    root->left->right->left->right= new Node(5);
    root->right = new Node(3);
    root->right->left=new Node(2);
    root->right->right=new Node(1);
    root->right->left->right=new Node(6);
    root->right->left->right->right=new Node(7);
    // printLevelOrder(root);
    cout<<sumAtLevelK(root, 1)<<endl;
        return 0;
} 