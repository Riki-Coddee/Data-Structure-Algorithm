#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isPalindrone(int num){
    int temp = num, number = 0;
    while (temp > 0)
    {
        number = number*10 + temp%10;
        temp /= 10;
    }
    if(number == num){
        return true;
    }
    return false;
}
int findPalindromicSubarray(vector<int> arr, int k){
   int num = 0;
   for (int i = 0; i < k; i++)
   {
    num = num*10 +  arr[i];
   }
   if(isPalindrone(num)){
    return 0;
   }
   for (int i = k; i < arr.size(); i++)
   {
    num = (num % (int)pow(10, k-1))*10 + arr[i];
    if(isPalindrone(num)){
        return i-k+1;
    }
   }
   return -1;
}
int main(){
    vector<int> arr = {1,2,4,5,6,7,6,3,1,5};
    int k = 3;
    int idx = findPalindromicSubarray(arr, k);
    if(idx == -1){
        cout<<"No Palindrone Number exist."<<endl;
    }else{
    for (int i = idx; i < idx+k; i++)
    {
       cout<<arr[i];
    }
    }
    cout<<endl;
    return 0;
}
