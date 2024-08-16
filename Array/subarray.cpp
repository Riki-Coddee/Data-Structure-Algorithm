// highest length of arthemetic array in subarray
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
    
//     int ans = 2;
//     int curr =2;
//     int pd = arr[1] - arr[0];
//     int j = 2;
//     while (j<n)
//     {
//         if(pd == arr[j] - arr[j-1]){
//             curr++;
//         }
//         else {
//             pd = arr[j] - arr[j-1];
//             curr = 2;
//         }
//         ans = max(curr, ans); 
//         j++;
//     }
//     cout<<ans;
//     return 0;
// }

// Total number of record breaking days
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n+1];
//     arr[n] = -1;
//     for (int i = 0; i < n; i++)
//     {
//            cin>>arr[i];
//     }
    
//     int mx = -1;
//     int ans=0;
//     for (int i = 0; i < n; i++)
//     {
//               if(arr[i] > mx && arr[i]>arr[i+1]){
//                 ans++;
//               }
//               mx = max(mx, arr[i]);
//     }
//     cout<<ans<<endl;
//     return 0;
// }