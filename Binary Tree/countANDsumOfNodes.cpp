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
int sumAllNode(Node* root){
    if(root == NULL){
        return 0;
    }
    return sumAllNode(root->left) + sumAllNode(root->right) + root->data;
}
// o{n}
int calcDiameter(Node* root, int* height){
    if(root == NULL){
        *height = 0;
        return 0;
    }
    int lh = 0, rh =0;
    int lDiameter = calcDiameter(root->left, &lh);
    int rDiameter = calcDiameter(root->right, &rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1;
    return (max(currDiameter, max(lDiameter, rDiameter)));

}
            //    o{n^2} 
        // int calcHeight(Node* root){
        //     if(root == NULL){
        //         return 0;
        //     }
        //      return max(calcHeight(root->left),calcHeight(root->right)) +1;
        // }     
        // int calcDiameter(Node* root){
        //     if(root == NULL){
        //         return 0;
        //     }
        //     int Lheight = calcHeight(root->left);
        //     int Rheight = calcHeight(root->right);
        //     int curDiameter = Lheight + Rheight + 1;

        //     int lDiameter = calcDiameter(root->left);
        //     int RDiameter = calcDiameter(root->left);
        //     return max(curDiameter, max(lDiameter, RDiameter));
        // }
        
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
    cout<<countNode(root)<<endl;
    cout<<sumAllNode(root)<<endl;
    int height =0;
    cout<<calcDiameter(root, &height)<<endl;
    return 0;
}