#include<iostream>
#include<vector>
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
bool getPath(Node *root, int key, vector<int> &path){
if(root == NULL){
    return false;
}
path.push_back(root->data);
if(root->data == key){
    return true;
}
if(getPath(root->left, key, path) || getPath(root->right, key, path)){
    return true;
}
path.pop_back();
return false;
}
int lowestCommonAncestor(Node* root, int n1, int n2){
    if(root == NULL){
        return -1;
    }
    vector<int> path1, path2;
    if(!getPath(root, n1, path1) || !getPath(root, n2, path2)){
        return -1;
    }
    int pc;
    for (pc = 0; pc < path1.size() && pc < path2.size(); pc++)
    {
        if(path1[pc] != path2[pc]){
            break;
        }
    }
    return path1[pc-1];
    
}
Node *LCA(Node* root, int n1, int n2){
    if(root == NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    Node* leftLCA = LCA(root->left, n1, n2);
    Node* rightLCA = LCA(root->right, n1, n2);
    if(leftLCA && rightLCA){
        return root;
    }
    if(leftLCA != NULL){
        return leftLCA;
    }
    else return rightLCA;
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
        cout<<lowestCommonAncestor(root, 7, 6)<<endl;
        Node *lca = LCA(root, 7, 6);
        if(lca == NULL){
            cout<<"No LCA"<<endl;
        }
        else{
            cout<<"LCA:"<<" "<<lca->data<<endl;
        }
    return 0;
}