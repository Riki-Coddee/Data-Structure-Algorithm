#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int n){
     data = n;
     next = NULL;
    }
};
class queue{
    node* front;
    node* back;

    public:
    queue(){
        front = NULL;
        back = NULL;
    }
    void enqueue(int x){
          node* n = new node(x);
          if(front == NULL){
            front = n;
            back = n;
            return;
          }
          back->next = n;
          back = n;
    }
    void dequeue(){
        if(front == NULL){
            cout<<"Queue underflow"<<endl;
             return;
        }
        node* todelete = front;

        front = front->next;
        delete todelete;
    }
    int peek(){
        if(front == NULL){
            cout<<"Queue underflow"<<endl;
             return -1;
        }
        return front->data;
    }
    bool empty(){
        if(front == NULL){
             return true;
        }
        return false;
    }
};
int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    return 0;
}