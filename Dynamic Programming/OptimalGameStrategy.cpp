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
int dp[N][N];
vector<int> arr;
int solve(int i, int j){
    if(i == j){
        return arr[i];
    }
    if(i >j){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    int  l = arr[i] + min(solve(i+2, j ), solve(i+1,j-1));
    int r = arr[j] + min(solve(i,j-2), solve(i+1, j-1));
    return dp[i][j] = max(l,r);
 }
int main(){
    memset(dp, -1, sizeof(dp));
 int n;
 cin>>n;
 arr = vector<int> (n);
 rep(i,0,n){
    cin>>arr[i];
 }
 cout<<solve(0,n-1)<<endl;
    return 0;
}