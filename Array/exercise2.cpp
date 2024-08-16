// Find the smallest index of repeated number
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     const int N= 1e6+2;
//     int idx[N];
//     for (int i = 0; i <  N; i++)
//     {
//          idx[i] = -1;
//     }
//       int minidx = INT_MAX;
//       for (int i = 0; i < n; i++)
//       {
//         if(idx[arr[i]] != -1){
//             minidx = min(minidx, idx[arr[i]]);
//         }
//         else{
//             idx[arr[i]] = i;
//         }
//       }
//       if(minidx == INT_MAX){
//        cout<<"-1"<<endl;
//       }
//       else
//       {
//         cout<<minidx<<endl;
//       }
      
      
    
//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//      cin>>arr[i];
//   }
//   int i = 0, j=0, st = -1, en = -1, sum =0 , s=18;
//   while(j<n && sum + arr[j]<=s){
//     sum += arr[j];
//     j++;
//   }
//   if(sum == s){
//     cout<<i+1<<" "<<j<<endl;
//     return 0;
//   }
//   while (j<n)
//   {
//     sum += arr[j];
//     while (sum > s){
//       sum -= arr[i];
//       i++;
//     }
//     if(sum==s)
//     {
//       st = i+1;
//       en = j+1;
//       break;
//     }
//     j++;
//   }
//   cout<<st<<" "<<en<<endl;
  

   
//   return 0;
// }

// Check the smallest number in an array
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin>>arr[i];
//   }
//   int N=1e+2;
//  bool check[N];
//   for (int i = 0; i < N; i++)
//   {
//     check[i] = false;
//   }
//   for (int i = 0; i < n; i++)
//   {
//     check[arr[i]] = true;
//   }
//   for (int i = 0; i < n; i++)
//   {
//     if(check[i] == false){
//       cout<<i;
//       break;
//     }
//   }
//   return 0;
// }

  
  // #include<iostream>
  // using namespace std;
  // int main(){
  //   int n;
  //   cin>>n;
  //   int arr[n];
  //   for (int i = 0; i < n; i++)
  //   {
  //      cin>>arr[i];
  //   }
    
  //   for (int i = 0; i < n; i++)
  //   {
  //     for (int j = i; j < n; j++)
  //   {
  //     for (int k = i; k <= j; k++)
  //     {
  //       cout<<arr[k]<<" ";
  //     }
  //     cout<<endl;
  //   }
    
  //   }
    
  //   return 0;
  // }

// Cumulative sum approach
  // #include<iostream>
  // #include<climits>
  // using namespace std;
  // int main(){
  //   int n;
  //   cin>>n;
  //   int arr[n];
  //   for (int i = 0; i < n; i++)
  //   {
  //     cin>>arr[i];
  //   }
  //     int currSum[n+1];
  //     currSum[0] = 0;
  //     for (int i =1; i <=n; i++)
  //     {
  //       currSum[i] = currSum[i-1] + arr[i-1];
  //     }
      
  //     int mx = INT_MIN;
  //     for (int i = 1; i <=n; i++)
  //     {
  //       int sum = 0;
  //       for (int j = 0; j < i; j++)
  //       {
  //         sum = currSum[i] - currSum[j];
  //         mx = max(sum, mx);
  //       }
        
  //     }
  //     cout<<mx;
      
      
      
  //   return 0;
  // }

  // Kadene's algorithm
  // #include<iostream>
  // #include<climits>
  // using namespace std;
  // int main(){
  //   int n;
  //   cin>>n;
  //   int arr[n];
  //   for (int i = 0; i < n; i++)
  //   {
  //     cin>>arr[i];
  //   }
  //   //using array
  //   // int curSum[n+1];
  //   // curSum[0] = 0;
  //   // for (int i = 1; i <= n; i++)
  //   // {

  //   //   if(curSum[i-1] < 0)
  //   //   {
  //   //     curSum[i] = arr[i-1];
  //   //   }else{
  //   //     curSum[i] = curSum[i-1] + arr[i - 1];
  //   //   }
      
  //   // }
  //   // int mx = INT_MIN;
  //   // for (int i = 1; i <=n; i++)
  //   // {
  //   //   mx = max(mx, curSum[i]);
  //   // }
  //   // cout<<mx;

  //   // without using array
  //   int currentSum = 0;
  //   int mx = INT_MIN;
  //   for (int i = 0; i < n; i++)
  //   {
  //     if(currentSum <0){
  //       currentSum = 0;
  //     }
  //     currentSum += arr[i];
  //     mx = max(currentSum, mx);
  //   }
  //   cout<<mx;
  //   return 0;

  // }

//sum of subarray in circular subarray
// #include<iostream>
// #include<climits>
// using namespace std;
// int kadene(int arr[], int n){
//   int mx = INT_MIN;
//   int currentsum =  0;
//   for (int i = 0; i < n; i++)
//   {
//     if(currentsum<0){
//     currentsum=0;
//     }
//     currentsum += arr[i];
//     mx= max(currentsum, mx);
//   }
//   return mx;
// }
// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0; i<n ; i++){
//   cin>>arr[i];
// }
// int wrapsum;
// int nonwrapsum;
// nonwrapsum = kadene(arr, n);
// int totalsum = 0;
// for (int i = 0; i < n; i++)
// {
//   totalsum += arr[i];
//   arr[i] = -arr[i];
// }
// wrapsum = totalsum + kadene(arr, n);
// cout<<max(wrapsum, nonwrapsum)<<endl;

// return 0;
// }

// pair sum 
#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  
  int low = 0;
  int high = n-1;
  while (low<high)
  {
    if (arr[low]+arr[high]==k)
    {
      cout<<low<<" "<<high<<endl;
      return 0;
    }else if (arr[low]+arr[high]>k)
    {
      high--;
    }
    else{
      low++;
    }
    
  }
  cout<<"not found"<<endl;
  return 0;
}