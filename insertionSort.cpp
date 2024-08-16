// insertion sort
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int currInt = arr[i];
//         int j=i-1;
//         while(arr[j]>currInt){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = currInt;

//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }

//sorting
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     int ans = 2;
//     int pd = arr[1] - arr[0];
//     int j=2;
//     int curr = 2;
    
//     while (j<n){
//         if(pd == arr[j] - arr[j-1]){
//             curr++;
//         }
//         else{
//             pd = arr[j] - arr[j-1];
//             curr=2;
//         }
//         ans = max (ans, curr);
//         j++;
//     }
//     cout<<ans<<endl;
//     return 0;
// }

//no of record breaking day
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n+1];
//     a[n] = -1;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     int i= 0;
//     int mx = -1;
//     int ans= 0;
//     while (i < n)
//     {
//         if(a[i]>mx && a[i]>a[i+1]){
//             ans++;
//         }
//         mx = max(mx, a[i]);
//         i++;
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];   
//     }

//     int N = 1e6 + 2;
//     int idx[N]; 
//     for(int i = 0; i < N; i++) {
//        idx[i] = -1;
//     }

//     int minidx = INT_MAX;
//     for (int i = 0; i < n; i++) {
//         if (idx[a[i]] != -1) {
//             minidx = min(idx[a[i]], minidx);
//         } else {
//              idx[a[i]] = i;
//         }
//     }

//     if (minidx == INT_MAX) {
//         cout << -1 << endl;
//     } else {
//         cout << minidx << endl;
//     }
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n, s;
//     cin >> n >>s;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin >> a[i];
//     }
//     int i=0,j=0,st=-1,en=-1,sum=0;
//     while (j<n && sum+a[j] <= s)
//     {
//        sum += a[j];
//        j++;
//     }
//     if(sum == s){
//         cout<<i+1<<" "<<j<<endl;
//         return 0;
//     }

//     while (j<n)
//     {
//         sum += a[j];
//         while (sum > s)
//         {
//              sum -= a[i];
//              i++;
//         }
//         if(sum == s){
//             st= i+1;
//             en = j+1;
//              break;
//         }
//         j++;
//     }
//     cout<<st<<" "<<en<<endl;
    
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int N= 1e6 + 2;
    bool check[N];
    for (int i=0; i<=N;i++){
        check[N] = false;
    }
    for (int i = 0; i < n; i++)
    {
       if(a[i]>=0){
        check[a[i]] = true;
       }
    }
    int ans = -1;
    for (int i = 0; i < N; i++)
    {
       if(check[i] == false){
          ans = i;
          break;
       }
    }
    
    cout << ans << endl;
    return 0;
}