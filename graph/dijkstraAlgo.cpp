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
vector<int> dist(n+1, INF);
vector<vector<pair<int, int>>> graph(n+1);
rep(i,0,e){
    int u,v,w;
    cin>>u>>v>>w;
    graph[u].push_back({v,w});
    graph[v].push_back({u,w});
}
int source;
cin>>source;
dist[source] = 0;
set<pair<int, int>> s;
s.insert({0, source});
while(!s.empty()){
    auto x = *(s.begin());
    s.erase(s.begin());
    for(auto i : graph[x.second]){
        if(dist[i.ff] > dist[x.ss] + i.ss){
            s.erase({dist[i.ff], i.ff});
            dist[i.ff] = dist[x.ss] + i.ss;
            s.insert({dist[i.ff], i.ff});
        }
    }
}
rep(i,1,n+1){
    if(dist[i]<INF){
        cout<<dist[i]<<" ";
    }
    else{
        cout<<"-1";
    }
}
cout<<endl;
    return 0;
}
