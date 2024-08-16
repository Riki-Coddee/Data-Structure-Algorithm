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
bool isCycle(int src, vector<vector<int>> &adj, vector<int> &visited, vector<int> &stack){
    stack[src] = true;
    if(!visited[src]){
            visited[src] = true;
        }
    for(auto i : adj[src]){
        if(!visited[i] && isCycle(i, adj, visited, stack)){
            return true;
        }
        if(stack[i]){
            return true;
        }
    }
    stack[src] = false;
    return false;
}
int main(){
int n,e;
cin>>n>>e;
vector<vector<int>> adj(n);
rep(i, 0, e){
    int x,y;
    cin>>x>>y;
   
   adj[x].push_back(y);
}

vector<int> stack(n, 0);
vector<int> visited(n,0);
bool cycle =false;
rep(i,0,n){
    if(!visited[i] && isCycle(i, adj, visited, stack)){
       cycle =  true;
    }
}
if(cycle){
    cout<<"cycle is present";
}
else{
    cout<<"cycle is not present";
}
cout<<endl;
    return 0;
}