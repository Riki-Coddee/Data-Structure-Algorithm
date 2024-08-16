// Build Tree From Pre Order and Inorder
//  #include<iostream>
// #include<vector>
// using namespace std;
// class Node{
//     public:
//     int data;
//      Node* left;
//      Node* right;
//     Node(int val){
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// int search(int inorder[], int start, int end, int curr){
//     for (int i = start; i <=end; i++)
//     {
//        if(curr == inorder[i]){
//         return i;
//        }
//     }
//     return -1;
// }
// void inorderPrint(Node* root){
//     if(root == NULL){
//         return;
//     }
//     inorderPrint(root->left);
//     cout<<root->data<<" ";
//     inorderPrint(root->right);
// }
// Node* buildTree(int preorder[], int inorder[], int start, int end){
//     static int idx = 0;
//      if(start > end){
//         return NULL;
//      }
//      int curr = preorder[idx];
//      idx++;
//      Node* node = new Node(curr);
//      if(start == end){
//         return node;
//      }
//      int pos = search(inorder, start, end, curr);
//      node->left = buildTree(preorder, inorder, start, pos-1);
//      node->right = buildTree(preorder, inorder, pos+1, end);

//      return node;
// }

// int main(){
//   int preorder[] = {1,2,4,3,5};
//   int inorder[] = {4,2,1,5,3};
//   Node* root = buildTree(preorder, inorder, 0,4);
//   inorderPrint(root);
// return 0;
// }

// Build Tree From Post Order and Inorder
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
int search(int inorder[], int start, int end, int curr){
    for (int i = start; i <= end; i++)
    {
      if (curr == inorder[i])
      {
        return i;
      }
    }
      return -1;
    
}
void inorderPrint(Node* root){
    if (root == NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
    
}
Node* buildTree(int postorder[], int inorder[], int start, int end){
    static int idx = end;
    if(start > end){
        return NULL;
    }
    int curr = postorder[idx];
    idx--;
    Node* node = new Node(curr);
    if(start == end){
        return node;
    }
    int pos = search(inorder, start,  end,  curr);
     node->right = buildTree(postorder, inorder, pos+1, end);
     node->left = buildTree(postorder, inorder, start, pos-1);
     return node;


}

int main(){
  int postorder[] = {1,2,4,3,5};
  int inorder[] = {4,2,1,5,3};
  Node* root = buildTree(postorder, inorder, 0,4);
  inorderPrint(root);
return 0;
}