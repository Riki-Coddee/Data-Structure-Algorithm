#include <iostream>
#include <vector>
#include <set>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
#define rep(i,a,b) for(int i=a; i<b; i++)


const int N = 1e3 + 2;
const int INF = 1e9+7;
// Memorized Method
// int dp[N];
// int minSquare(int n){
//     if(n==0 || n==1 || n==2 || n ==3){
//         return n;
//     }
//     if(dp[n] != INF)
//        return dp[n];

//     for (int i = 1; i*i <=  n; i++)
//     {
//         dp[n] = min(dp[n], 1 + minSquare(n-i*i));
//     }
//     return dp[n];
// }

// int main() {
//     rep(i,0,N)
//       dp[i] = INF;
// int n;
// cin>>n;
// cout<< minSquare(n) <<endl;
//     return 0;
// }
int main(){
    int n;
    cin>>n;

    vi dp(n+1, INF);
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;

    for (int i = 0; i*i <= n ; i++)
    {
        for (int j = 0; i*i+j <=n ; i++)
        {
            dp[i*i+j] = min(dp[i*i+j],1+dp[j]);
        }
        
    }
    cout<<dp[n]<<endl;
    return 0;
}
