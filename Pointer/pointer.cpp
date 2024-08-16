#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
     *a = *b;
     *b =  temp;
}
int main(){
    //         Index pointer || Pointers and Arrays
    // int arr[] = {10, 20, 30, 40};
    // int *ptr = arr;
    // for (int i = 0; i < 4; i++)
    // {
    // cout<<*(arr+i)<<endl;
    // }
    
    // Pointer to pointer
    // int a = 10;
    // int *ptr = &a;
    // cout<<&ptr<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    // int **q = &ptr;
    // cout<<q<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;
   
    int a = 2;
    int b =4;
    
    int *aptr = &a;
    int *bptr = &b;

    swap(aptr, bptr);
    cout<<a<<' '<<b<<endl;
    return 0;
}