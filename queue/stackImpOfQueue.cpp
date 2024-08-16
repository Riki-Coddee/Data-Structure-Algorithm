#include<iostream>
#include<stack>
using namespace std;
// class queue{
//     stack<int> st1;
//     stack<int> st2;
//     public:
//     void enqueue(int n){
//         st1.push(n);
//     }
//     int dequeue(){
//         if(st1.empty() && st2.empty()){
//             cout<<"Queue Underflow"<<endl;
//             return -1;
//         }
//         if(st2.empty()){
//             while(!st1.empty()){
//                 st2.push(st1.top());
//                 st1.pop();
//             }
//         }
//     int topVal = st2.top();
//     st2.pop();
//     return topVal;
//     }
//     bool empty(){
//         if(st1.empty() && st2.empty()){
//             return true;
//         }
//         return false;
//     }
//     int peek(){
//         int topVal;
//         if(st1.empty() && st2.empty()){
//             cout<<"Queue Underflow"<<endl;
//             return -1;
//         }
//         else if(st1.empty()){
//             topVal = st2.top();
//             return topVal;
//         }
//         else{
//             if(st2.empty()){
//             while(!st1.empty()){
//                 st2.push(st1.top());
//                 st1.pop();
//             }
//         }
//     int topVal = st2.top();
//     return topVal;
//         }
//     }
// };
// int main(){
//     queue qt;
//     qt.enqueue(1);
//     qt.enqueue(2);
//     qt.enqueue(3);
//     qt.enqueue(4);
//     cout<<qt.peek()<<endl;
//     qt.dequeue();
//     cout<<qt.peek()<<endl;
//     return 0;
// }

class queue{
    public:
    stack<int> st;
    void enqueue(int n){
        st.push(n);
    }
    int dequeue(){
        if(st.empty()){
            cout<<"Queue Underflow"<<endl;
            return -1;
        }
        int x = st.top();
        st.pop();
        if(st.empty()){
            return x;
        }
        int item =dequeue();
        st.push(x);
        return item;
    }
    bool empty(){
        if(st.empty()){
            return true;
        }
        return false;
    }
    int peek(){
        if(st.empty()){
            cout<<"Queue Underflow"<<endl;
            return -1;
        }
        int topVal = st.top();
        return topVal;
        
        
    }
};
int main(){
    queue qt;
    qt.enqueue(1);
    qt.enqueue(2);
    qt.enqueue(3);
    qt.enqueue(4);
    cout<<qt.peek()<<endl;
    cout<<qt.dequeue()<<endl;
    cout<<qt.peek()<<endl;
    qt.enqueue(5);
    cout<<qt.peek()<<endl;
    
    
    return 0;
}