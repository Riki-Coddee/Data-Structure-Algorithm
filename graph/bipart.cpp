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
vector<int> col;
bool bipartite;
void color(int u,int curr){
    if(col[u] != -1 && col[u] !=curr){
        bipartite = false;
        return;
    }
    col[u] = curr;
    if(vis[u])
    return;

    vis[u] = true;
    for(auto i : adj[u]){
        color(i, curr xor 1);
    }
}
int main(){
int n,e;
cin>>n>>e;
bipartite = true;
adj = vector<vector<int>>(n);
rep(i,0,e){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}

vis = vector<bool>(n, false);
col = vector<int>(n, -1);
rep(i,0,n){
    if(!vis[i]){
        color(i, 0);
    }
}
if(bipartite){
    cout<<"Graph is bipartite";
}
else{
    cout<<"Graph is not bipartite";
}
    return 0;
}