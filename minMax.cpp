// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
// int n1;
// cout<<"Enter the legth of arr"<<endl;
// cin>>n1;
// int arr[n1];
// cout<<"Enter the values for arr"<<endl;
// for(int i=0;i<n1;i++){
// cin>>arr[i];
// }
// cout<<"the values for arr"<<endl;
// int maxNo = INT_MIN;
// int minNo = INT_MAX;
// for(int i=0;i<n1;i++){
// cout<<arr[i]<<endl;
// maxNo = max(maxNo, arr[i]);
// minNo = min(minNo, arr[i]);
// }
// cout<<"Max:"<<maxNo<<endl;
// cout<<"Min:"<<minNo<<endl;
// return 0;
// }

// Binary Search
// #include<iostream>
// int binarySearch(int arr[], int key, int n){
//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e = mid-1;
//         }
//         else{
//             s= mid+1;
//         }
//     }
//         return -1;
// }
// using namespace std;
// int main(){
// int arr[5];
// for (int i = 0; i < 5; i++)
// {
//     cin>>arr[i];
// }
// cout<<binarySearch(arr, 44, 5);
// return 0;
// }

//sorting Array
#include<iostream>
using namespace std;
int main(){
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
      cin>>arr[i];
    }
    for (int i=0; i<3; i++){
        for(int j=i+1;j<4;j++){
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j] = temp;
        }
        }
    }
    for (int i=0; i<4; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}