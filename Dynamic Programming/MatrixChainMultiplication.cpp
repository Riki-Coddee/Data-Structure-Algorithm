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
// memorization
// int a[N];
// int dp[N][N];
// int mcm(int i, int j){
//     if(i==j){
//         return 0;
//     }
//    if(dp[i][j] != -1){
//     return dp[i][j];
//    }
//    dp[i][j] = MOD;
//    rep(k,i,j){
//     dp[i][j] = min(dp[i][j], mcm(i,k)+ mcm(k+1,j) + a[i-1]*a[k]*a[j] );
//    }
//    return dp[i][j];
// }
// int main(){

// int n;
// cin>>n;
// memset(dp, -1, sizeof dp);
// rep(i,0,n){
//     cin>>a[i];
// }
// cout<<mcm(1,n-1)<<endl;
//     return 0;
// }

// Tabulation
int a[N];
int dp[N][N];
int main(){
    int n; cin>>n;
    rep(i,0,n){
        cin >> a[i];
    }
    rep(i,1,n){
        dp[i][i] = 0;
    }
    rep(l,2,n){
        rep(i,1,n-l+1){
            int j = i+l-1;
            dp[i][j] = MOD;
            rep(k,i,j){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + a[i-1]*a[k]*a[j]);
            }
        }
    }
    cout<<dp[1][n-1]<<endl;
    return 0;
}
