#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vvi vector<vi>
const int N= 1e3+2, MOD = 1e9+7;
//Memorization
// int dp[N];
// int lis(vi &a, int n){
//     if(dp[n] != -1){
//         return dp[n];
//     }
//     dp[n] = 1;
//       rep(i,0,n){
//         if(a[n] > a[i])
//         dp[n] = max(dp[n], 1+lis(a,i));
//       }
//       return dp[n];
// }
// int main(){
//     rep(i,0,N)
//     dp[i] = -1;
// int n;
// cin>>n;
// vi a(n);
// rep(i,0,n){
//     cin>>a[i];
// }
// cout<<lis(a, n-1)<<endl;
//     return 0;
// }

// Tabulation
int main(){
int n;
cin>>n;
vi arr(n);
rep(i,0,n){
    cin>>arr[i];
}
int curr = 0, maxTillNow = 0;
rep(i,0,n){
    if(curr < 0){
        curr = 0;
    }
    curr += arr[i];
    maxTillNow = max(maxTillNow, curr);

}
cout<<maxTillNow<<endl;
    return 0;
}