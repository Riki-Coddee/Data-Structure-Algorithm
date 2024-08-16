// #include<iostream>
// using namespace std;
// int dec(int n){
//     if(n==1){
//         cout<<"1"<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }
// int inc(int n){
//     if(n==1){
//         cout<<"1"<<endl;
//         return;
//     }
//     inc(n-1);
//     cout<<n<<endl;
// }
// int main(){
// int n;
// cin>>n;
// dec(n);
//     return 0;
// }

#include<iostream>
using namespace std;

int lastocc(int arr[], int n, int key, int i){
    if(i == n) {
        return -1;  // Base case: If index i goes out of bounds, return -1 (key not found).
    }
    
    int restArray = lastocc(arr, n, key, i + 1);  // Recursively find key in the rest of the array.
    
    if(restArray != -1){
        return restArray;  // If key found in the rest of the array, return that index.
    }
    
    if(arr[i] == key){
        return i;  // If key found at current index, return this index.
    }
    
    return -1;  // Otherwise, key not found in the array.
}
int main(){
    int arr[] = {1,2,3,2,4,2,5};
    cout<<lastocc(arr, 7, 2, 0);
    return 0;
}