#include<iostream>
#include<queue>
using namespace std;
 priority_queue<int, vector<int>> pqmax;
 priority_queue<int, vector<int>, greater<int>> pqmin;
void insert(int x){
    if(pqmax.size() == pqmin.size()){
        if(pqmax.size() == 0){
            pqmax.push(x);
        }
        if(x< pqmax.top()){
            pqmax.push(x);
        }
        else{
            pqmin.push(x);
        }
    }
    else{
            //two cases possible
            // Case 1: size of maxHeap > size of minHeap
            // Case 1: size of minHeap > size of maxHeap
            if(pqmax.size() > pqmin.size()){
                if(x >= pqmax.top()){
                    pqmin.push(x);
                }
                else{
                  int temp = pqmax.top();
                  pqmax.pop();
                  pqmax.push(x);
                  pqmin.push(temp);
                }
            }
            else{
                if(x <= pqmin.top()){
                    pqmax.push(x);
                }
                else{
                    int temp =pqmin.top();
                    pqmin.pop();
                    pqmin.push(x);
                    pqmax.push(temp);
                }
            
        }
    }
}
double findMedian(){
    if(pqmin.size() == pqmax.size()){
        return (pqmin.top() + pqmax.top())/2.0;
    }
    else if(pqmin.size()  > pqmax.size()){
        return pqmin.top();
    }
    else 
    return pqmax.top();
}
int main(){
   insert(10);
   cout<<findMedian()<<endl;
   insert(15);
   cout<<findMedian()<<endl;
   insert(21);
   cout<<findMedian()<<endl;
   insert(18);
   cout<<findMedian()<<endl;
   insert(19);
   cout<<findMedian()<<endl;
     
    return 0;
}