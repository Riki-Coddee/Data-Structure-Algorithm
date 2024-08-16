#include <iostream>
#include <vector>
#include <set>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
#define rep(i,a,b) for(int i=a; i<b; i++)


const int N = 1e5 + 3;
const int INF = 1e9;



int main() {
int n,e;
cin>>n>>e;
vector<vector<int>> edges;
rep(i,0,e){
    int u,v,w;
    cin>>u>>v>>w;
    edges.push_back({u,v,w});
}
int  src;
cin>>src;
vector<int> dist(n,INF);
dist[src] = 0;
rep(i,0,n-1){
    for(auto e : edges){
        int u, v, w;
        u= e[0];
        v = e[1];
        w = e[2];
        dist[v] = min(dist[v], w + dist[u]);
    }
} 
for(auto i : dist){
    cout<<i<<" ";
}
cout<<endl;
    return 0;
}
