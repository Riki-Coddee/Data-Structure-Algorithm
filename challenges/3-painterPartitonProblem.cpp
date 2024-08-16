// maximum of pages allocated toa studet is minimum
#include<iostream>
#include<climits>
using namespace std;
int isFeasible(int boards[], int n, int limit){
    int paintersRequired = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        
        if(sum + boards[i] > limit){
            paintersRequired++;
            sum = boards[i];
        }
        else{
            sum += boards[i];
        }
    }
    return paintersRequired;
    
}
int minimumTime(int boards[], int n, int m){
    int totalLength = 0;
    int k = INT_MIN;
    for (int i = 0; i < n; i++)
    {
         k = max(k, boards[i]); 
        totalLength += boards[i];
    }

    int low = k;
    int high = totalLength;
    while (low < high){
        int mid = (low + high) / 2;
        int painters = isFeasible(boards, n, mid);
        if(painters <= m){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }
    
    
    return low;
}
int main(){
    int boards[] = {10, 20, 30, 40};
    int n = 4;
    int m =2;
    cout<<minimumTime(boards, n, m)<<endl;
    return 0;
}