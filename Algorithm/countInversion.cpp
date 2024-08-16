#include<iostream>
using namespace std;
long long merge(int arr[], int l, int mid, int r){
    int n1 = mid - l+1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
       b[i] = arr[(mid+1)+i];
    }
    
    int i=0;
    int j=0;
    int k =l;
    long long inv= 0;
    while (i < n1 && j< n2)
    {
        if(a[i]<=b[j]){
            arr[k] = a[i];
            i++;
            k++;
        }
        else{
            arr[k] = b[j];
                j++;
                k++;
                inv += n1 - i;
            }
        }
    
    return inv;
}
long long mergeSort(int arr[],int l, int r){
    long long inv = 0;
    if(l<r){
    int mid = (l+r)/2;
       inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid+1, r);

        inv += merge(arr, l, mid, r);
            }
            return inv;
}
int main(){
    int arr[] = {3, 5 ,6, 9, 1, 2, 7, 8};
int result = mergeSort(arr, 0, 7);
cout<<result;
    
    return 0;
}