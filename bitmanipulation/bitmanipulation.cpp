// get bit
// #include<iostream>
// using namespace std;
// int getbit(int n, int pos){
// return ((n & (1<<pos) ) !=0);
// }
// int setbit(int n, int pos){
//     return (n | (1<<pos));
// }
// int clearbit(int n, int pos){
// return (n & (~(1<<pos)));
// }
// int updatebit (int n, int pos, int value){
//     int mask  = ~(1<<pos);
//     n = n & mask;
//     return (n | (value<<pos));
// }
// int main(){
//     int result = updatebit(5, 2, 0);
//     cout<<result<<endl;
//     return 0;

// }

// get 2 unique numbers
// #include<iostream>
// using namespace std;
// int setBit(int n, int pos){
//     return ((n & (1<<pos)) != 0 );
// }
// void unique(int arr[], int n){
//     int xornum = 0;
//     for (int i = 0; i < n; i++)
//     {
//        xornum = xornum ^ arr[i];
//     }
//     int tempxor = xornum;
//     int setbit = 0;
//     int pos = 0;
//     while (setbit != 1)
//     {
//         setbit = xornum & 1;
//         pos++;
//         xornum = xornum >> 1;
//     }
    
//     int newxor = 0;
//     int newxor2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//        if(setBit(arr[i], pos - 1)){
//          newxor = newxor ^ arr[i];
//        }
//        else{
//         newxor2 = newxor2 ^ arr[i];
//        }
//     }
//     cout<<newxor<<endl;
//     cout<<(newxor2)<<endl;
    
    
// }
// int main(){
//     int arr[] = {1,2,4,1,2,5};
//     unique(arr, 6);
//     return 0;
// }

#include<iostream>
using namespace std;
bool getBit(int num, int pos){
    return ((num & (1<<pos)) != 0);
}
int setBit(int num, int pos){
    return (num | (1<<pos));
}
void unique(int arr[], int n){
    int result = 0;
for (int i = 0; i <64; i++)
{
    int sum=0;
    for (int j = 0; j < n; j++)
    {
        if(getBit(arr[j], i)){
            sum++;
        }
    }
    if(sum%3 != 0){
        result = setBit(result, i);
    }
}
cout<<result<<endl;
}
int main(){
int arr[] = {1,1,1,2,2,2,4};
unique(arr, 7);
return 0;
}