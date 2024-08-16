#include<iostream>
#include<climits>
using namespace std;
void maxSubarray(int arr[], int n , int k, int x){
int sum = 0, ans = 0;
for (int i = 0; i < k; i++)
{
  sum += arr[i];
}
if(sum<x){
    ans = sum;
}
for (int i = k; i < n; i++)
{
   sum -= arr[i-k];
   sum += arr[i];
   if(sum < x){
    ans = max(sum, ans);
   }
   
}
cout<<"Max sum of subarray:"<<ans<<endl;

}
int main(){
    int arr[] = {1,2,3,4,5,7};
    maxSubarray(arr, 6, 3, 20);
    return 0;
}