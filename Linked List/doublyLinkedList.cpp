#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int val){
     data = val;
     prev = NULL;
     next = NULL;
    }
};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    if(head != NULL){
    head->prev = n; 
    }
    head = n;
}
void insertAtTail(node* &head, int val){
    node* temp = head;
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    node* n= new node(val);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteAtFirst(node* &head){
    node* todelete = head;
    head = head->next;
    head->prev = NULL;

    delete todelete;
}
void deletion(node* &head, int pos){
node* temp =head;
if(pos==1){
    deleteAtFirst(head);
    return;
}
int count = 1;
while (temp != NULL && count != pos)
{
    temp = temp->next;
    count++;
}
temp->prev->next = temp->next;
if(temp->next != NULL){

temp->next->prev = temp->prev;
}

delete temp;
}
int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
     display(head);
     deletion(head,5);
     display(head);
    return 0;
}