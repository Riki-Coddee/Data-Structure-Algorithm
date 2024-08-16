// n raised to the power of p
#include<iostream>
using namespace std;
int powRecur(int n, int p){
    if(p==0){
        return 1;
    }
    return n * powRecur(n,p-1);
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<powRecur(n,p)<<endl;
}