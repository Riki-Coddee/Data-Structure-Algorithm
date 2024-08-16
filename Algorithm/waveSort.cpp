#include<iostream>
using namespace std;
void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void waveSort(int arr[], int n){
    for (int i = 1; i < n; i+=2)
    {
        if(arr[i]>arr[i-1]){
            swap(arr, i, i-1);
        }
        if(arr[i]>arr[i+1] && i <= n-2){
            swap(arr, i, i+1);
        }
    }
    
}
int main(){
    int arr[] = {1,2,4,3,6,99,14,66,88,22};
    waveSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}