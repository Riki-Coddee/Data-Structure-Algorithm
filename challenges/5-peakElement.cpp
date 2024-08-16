#include<iostream>
using namespace std;
int peakElement(int arr[], int low, int high, int n){
    int mid = low + (high - low)/2;
    if((mid == 0 || arr[mid] > arr[mid-1])&& (mid == n-1 || arr[mid]>arr[mid+1])){
        return mid;
    }

    else if(mid > 0 && arr[mid] < arr[mid-1]){
        return peakElement(arr, low, mid-1, n);
    }
    else{
        return peakElement(arr, mid+1, high, n);
    }
}
int main(){
    int arr[]={1,2,3,4,10,9,8};
    int n = 7;
    int idx = peakElement(arr, 0, n-1, n);
    cout<<arr[idx]<<endl;
    return 0;
}