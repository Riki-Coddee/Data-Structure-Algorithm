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
int n = 5, W = 11;
vector<int> wt ={3,2,4,5,1};
vector<int> val ={4,3,5,6,1};
vector<int> dp(W+1 , 0);
rep(j,0,W+1){
    rep(i,0,n){
        if(j - wt[i] >= 0){
            dp[j] = max(dp[j], val[i] + dp[j - wt[i]]);
        }
    }
}
cout<<dp[W]<<endl;
    return 0;
}