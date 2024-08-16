// Brute Fore approch
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >>a[i];
//     }
    
//     int mxno = INT_MIN;
//     for (int i=0;i<n;i++){
//         for (int j = i; j < n; j++)
//         {
//         int currentsum = 0;
//             for(int k=i;k<=j;k++){
//                 currentsum += a[k];
//             }
//             mxno = max(mxno, currentsum);
//         }
        
//     }
//     cout<<mxno<<endl;
//     return 0;
// }


// cumulative sum approch
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >>a[i];
//     }
    
//     int currentsum[n+1];
//     currentsum[0]=0;
//     for (int i = 1; i <=n; i++)
//     {
//         currentsum[i] = currentsum[i-1] + a[i-1];
//     }
//     int maxSum = INT_MIN;
//     for (int i = 1; i <=n; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < i; j++)
//         {
//            sum = currentsum[i] - currentsum[j];
//            maxSum = max(maxSum, sum);
//         }
        
//     }

//     cout << maxSum;
//     return 0;
// }


// kadene's approch
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int currSum = 0;
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//        currSum += arr[i];
//        if(currSum<0){
//         currSum = 0;
//        }
//     maxSum = max(maxSum, currSum);
//     }
//     cout<< maxSum<<endl;
    
//     return 0;
// }

// kadene's approch for circular subarray
// #include<iostream>
// #include<climits>
// using namespace std;
// int kadane(int arr[], int n){
//     int currentsum = 0;
//     int maxsum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//     currentsum += arr[i];
//     if(currentsum<0){
//         currentsum=0;
//     }
//     maxsum = max(maxsum, currentsum);
//     }
//     return maxsum;
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int wrapsum;
//     int nonwrapsum;
//     nonwrapsum = kadane(arr, n);
//     int totalsum = 0;
//     for(int i=0; i<n ;i++){
//         totalsum +=arr[i];
//         arr[i] = -arr[i];
//     }
    
//     wrapsum = totalsum + kadane(arr, n);

//     cout<<max(wrapsum, nonwrapsum);
//     return 0;
// }

#include<iostream>
#include<climits>
using namespace std;
bool pairsum(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    while(low<high){
        if (arr[low]+arr[high]==k)
        {
            cout<<low<<" "<<high;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
        
    }
    return false;
}
int main(){
   int arr[]= {2,4,7,11,14,16,20,21};
   int k =31; 
   cout<<pairsum(arr, 8, k);
    return 0;
}