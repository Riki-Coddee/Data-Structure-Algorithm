#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cstring>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
#define rep(i,a,b) for(int i=a; i<b; i++)

int dp[205][205][205];
const int N = 1e5 + 3;
const int INF = 1e9;
int LCS(string &s1, string &s2, string &s3,int i, int j, int k){
    if(i==0 || j ==0 || k==0){
        return 0;
    }
    if(dp[i][j][k] != -1){
        return dp[i][j][k];
    }
    if (s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1]){
        return dp[i][j][k] = 1 + LCS(s1,s2,s3,i-1,j-1,k-1);
    }
        int l= LCS(s1,s2,s3,i-1,j,k);
        int p = LCS(s1,s2,s3,i,j-1,k);
        int q = LCS(s1,s2,s3,i,j,k-1);
        return dp[i][j][k] = max({l, p, q});
    
    
}
int main() {
    memset(dp, -1, sizeof(dp));
string s1; cin>> s1;
string s2; cin>>s2;
string s3; cin>>s3;
int i = s1.size();
int j = s2.size();
int k = s3.size();
cout<<LCS(s1,s2,s3,i,j,k)<<endl;
    return 0;
}
