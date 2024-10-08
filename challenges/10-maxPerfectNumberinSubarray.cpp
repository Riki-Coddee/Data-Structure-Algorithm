#include<iostream>
#include<cmath>
#include<climits>
#include<vector>
using namespace std;
bool isPerfectNumber(int n){
    int sum = 1;
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n%i ==0){
            if(i == n%i){
                sum += i;
            }else{
                sum += i + n/i;
            }
        }
    }
    if(sum == n && n!=1){
        return true;
    }
    return false;
}
int maxSum(int arr[], int n, int k){
    if(n < k){
        cout<<"Invalid Values"<<endl;
        return -1;
    }
    int res = 0;
    for (int i = 0; i <  k; i++)
    {
        res += arr[i];
    }
    int sum = res;
    for (int i = k; i < n; i++)
    {
        sum = sum +arr[i] -arr[i-k];
        res = max(sum, res);
    }
    return res;
}

int maxPerfectNumber(int arr[],int n, int  k){
    for (int i = 0; i < n; i++)
    {
           if(isPerfectNumber(arr[i])){
            arr[i] = 1;
           }else{
            arr[i] = 0;
           }
    }
    return maxSum(arr, n, k);
}
int main(){
int arr[] = {1,2,6,28};
int k =2;
cout<<maxPerfectNumber(arr, 4, k)<<endl;
    return 0;
}