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


const int N = 1e5 + 3;
const int INF = 1e9;

int main() {
int n;
cin>>n;

vi dp(n+1);

dp[0] = 0;
dp[1] = 0;
dp[2] = 1;

for (int i = 3; i <=n; i++)
{
    dp[i] = dp[i-1] +dp[i-2];
}
cout<<dp[n]<<endl;


    return 0;
}
