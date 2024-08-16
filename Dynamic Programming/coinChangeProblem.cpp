#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vvi vector<vi>
const int N= 1e3+2;
// Memorization Method
// int dp[N][N];
// int coinChange(vi &a, int n, int x){
//     if(x == 0){
//         return 1;
//     }
//     if(x < 0){
//         return 0;
//     }
//     if(n<=0)
//     {
//     return 0;
//     }
//     if(dp[n][x] != -1){return dp[n][x];}
//     dp[n][x] = coinChange(a, n, x-a[n-1]) + coinChange(a, n-1, x);
//     return dp[n][x];
// }
// int main(){
//     rep(i,0,N){
//         rep(j,0,N){
//             dp[i][j] = -1;
//         }
//     }
//     int n;
//     cin>>n;
//     vi a(n);
//     rep(i,0,n){
//         cin >> a[i];
//     }
//     int x;
//     cin>>x;
//     cout<<coinChange(a, n, x)<<endl;
//     return 0;
// }

// Tabulation Method
int main(){
    int n;
    cin >> n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    int  x;
    cin>>x;

    vvi dp(n+1, vi(x+1, 0));
    dp[0][0] = 1;
    rep(i,1,n+1){
        rep(j,0,x+1){
          if(j-a[i-1] >= 0)
              dp[i][j] += dp[i][j-a[i-1]];

              dp[i][j] += dp[i-1][j];
        }
    } 
    cout<< dp[n][x]<<endl;
    return 0;
}