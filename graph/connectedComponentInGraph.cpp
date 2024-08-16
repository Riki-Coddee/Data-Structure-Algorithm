#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<map>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second 
#define setBits(x) builtin_popcount(x)
vector<bool> vis;
vector<vector<int>> adj;
vector<int> components;
int get_comp(int idx){
    if(vis[idx]){
        return 0;
    }
    vis[idx]=true;
    int ans= 1;
    for(auto i :adj[idx]){
        if(!vis[i]){
            ans += get_comp(i);
        }
    }
    return ans;
}
int main(){
int n,e;
cin>>n>>e;
adj =vector<vector<int>>(n);
vis = vector<bool>(n,0);
rep(i,0,e){
int x,y;
cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);
}

rep(i,0,n){
    if(!vis[i]){
    components.push_back(get_comp(i));
    }
}
// for(auto i: components){
//     cout<<i<<" ";
// }
long long ans = 0;
for(auto i: components){
    ans += i * (n-i);
}
cout<<ans/2<<endl;
    return 0;
}