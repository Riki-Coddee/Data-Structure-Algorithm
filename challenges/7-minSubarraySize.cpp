#include<iostream>
#include<climits>
using namespace std;
int smallestSubarrayWithSumSize(int arr[], int n, int x){
    int sum = 0, minLength = n+1, end = 0, start = 0;
    while (end < n)
    {
       while (sum <= x && end < n)
    {
       sum += arr[end++];
    }
    while (sum > x && start < n)
    {
        if(end - start < minLength){
            minLength = end - start;
        }
       sum -= arr[start++];
       
    }
    }
    
    
    return minLength;
    
    

}
int main(){
    int arr[] = {1,4,45,6,10,19};
    int n = 6;
    int x = 51;
    cout<<smallestSubarrayWithSumSize(arr,n,x)<<endl;
    return 0;
}