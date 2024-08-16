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
void rightView(Node* root){
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node* curr = q.front();
            q.pop();
            if(i == n-1){
                cout<<curr->data<<" ";
            }
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
        
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
    Node* root = new Node(1);
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
        Node* root1 = new Node(1);
        root1->left = new Node(2);
        root1->left->left = new Node(3);
        root1->left->right = new Node(4);
        root1->left->left->left = new Node(5);
        root1->left->left->left->left = new Node(7);
        root1->left->right->right = new Node(6);

        Node* root2 = new Node(1);
        root2->left = new Node(2);
        root2->right = new Node(3);
        root2->left->left = new Node(4);
        root2->right->right = new Node(5);
        rightView(root);
    return 0;
}