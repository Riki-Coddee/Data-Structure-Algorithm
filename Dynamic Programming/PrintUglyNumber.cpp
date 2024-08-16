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
int main(){
int n = 10;
int c2=0,c3=0,c5=0;
vector<int> dp(n+1);
dp[0] = 1;
rep(i,1,n+1){
    dp[i] = min({2 * dp[c2], 3 * dp[c3], 5 * dp[c5]});
        if (2 * dp[c2] == dp[i]) c2++;
        if (3 * dp[c3] == dp[i]) c3++;
        if (5 * dp[c5] == dp[i]) c5++;
}
cout<<dp[n-1]<<endl;
    return 0;
}