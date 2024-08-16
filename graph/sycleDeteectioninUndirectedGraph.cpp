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

bool isCycle(int src, vector<vector<int>> &adj, vector<bool> &visited, int parent){
    visited[src] = true;
    for(auto i : adj[src]){
        if(i != parent){
            if(visited[i]) 
               return true;
            if(!visited[i] && isCycle(i,adj,visited,src))
               return true;
        }
    }
    return false;
}
int main(){
int n,e;
cin>>n>>e;
vector<vector<int>> adj(n);
rep(i,0,e){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}

vector<bool> visited(n,false);
bool cycle = false;
rep(i,0,n){
if(!visited[i] && isCycle(i,adj,visited,-1))
{
    cycle = true;
    break;
}
}
if(cycle){
    cout<<"Cycle is Present";
}
else{
    cout<<"Cycle is not Present";
}

    return 0;
}