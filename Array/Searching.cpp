#include<iostream>
using namespace std;
int binarySearch(int n, int arr[], int key){
int s, e;
s = 0;
e= n - 1;
while (s<=e)
{
    int mid = (s+e)/2;

   if(arr[mid]> key){
    e= mid - 1;
   }
   else if(arr[mid]< key){
    s = mid + 1;
   }
   else if(arr[mid] == key){
    return mid;
   }
}
return -1;

}
int main(){
    int n,key;
    cout<<"Enter the length of an array"<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"ENTER THE KEY"<<endl;
    cin>>key;
    int result = binarySearch(n, arr, key);
    cout << result;
    return 0;
}