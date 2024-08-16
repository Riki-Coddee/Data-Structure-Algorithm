#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vvi vector<vi>
const int N= 1e3+2, INF = 1e9+7;

int a[N];
int dp[N][N];
int main(){
    int n; cin>>n;
    rep(i,0,n){
        cin >> a[i];
    }
    vector<int> jumps(n, INF);
    if(a[0] == 0){
        cout<<INF<<" ";
        return 0;
    }
    jumps[0] = 0;
    rep(i,1,n){
        rep(j,0,i){
            if( i <= (j + a[j])){
                jumps[i] = min(jumps[i], jumps[j] + 1);
            }
        }
    }
    cout<<jumps[n-1]<<endl;
    return 0;
}
