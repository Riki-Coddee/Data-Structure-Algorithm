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
    int n;
    cin>>n; 
vector<int> dp(n+1, 0);
dp[0] = 1;
dp[1] = 1;
rep(i,2,n+1){
    dp[i] = dp[i-1] + (i-1)*dp[i-2];
}
cout<<dp[n]<<endl;
    return 0;
}