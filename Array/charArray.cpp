#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    
    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currlen=0, maxlength=0;
    int st = 0, maxst = 0;
    while (1){
    if(arr[i]==' ' || arr[i]=='\0'){
        if(currlen>maxlength){
            maxlength = currlen;
            maxst = st;
        }
        st = i+1;
            currlen = 0;
    }
    else{
     currlen++;
    }
    if(arr[i] == '\0'){
    break;
    }
    
    i++;
    }
    
    cout<<maxlength<<endl;
    for (int i = 0; i < maxlength; i++)
    {
        cout<<arr[i+maxst];
    }
    return 0;
}