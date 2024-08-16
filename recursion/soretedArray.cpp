#include<iostream>
using namespace std;
bool sorted(int arr[], int n){
    if(n==1){
        return true;
    }
    int restOfArray = sorted(arr+1, n-1);
    return (arr[0]<arr[1] && restOfArray);
}
int main(){
    int arr[]={1,2,3,7,5,6};
    cout<<sorted(arr, 6);
    
    return 0;
}