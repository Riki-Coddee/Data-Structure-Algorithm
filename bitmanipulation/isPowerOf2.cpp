#include<iostream>
using namespace std;
bool isPowerOf2(int n){
    return (n && !(n & n-1));
}
int main(){
    int n;
    cin>>n;
    if (isPowerOf2(n))
    {
        cout<<"true"<<endl;
    }
    else
    cout<<"false"<<endl;
    
    return 0;
}