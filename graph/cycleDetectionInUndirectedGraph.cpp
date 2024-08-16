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
const int N = 1e5 + 6;
vector<int> parent(N);
vector<int> sz(N);
void make_set(int v){
    parent[v] = v;
    sz[v] = 1;

}
int find_sets(int v){
    if(v == parent[v])
       return v;
    return parent[v] = find_sets(parent[v]);
}
void union_sets(int a, int b){
    a = find_sets(a);
    b = find_sets(b);
    if(a != b){
        if(sz[a] < sz[b])
        swap(a,b);

        parent[b] = a;
        sz[a] += sz[b];
    }
}
int main(){
rep(i, 0, N){
    make_set(i);
}
vector<vector<int>> edges;
int n,e;
cin>>n>>e;

rep(i,0,e){
 int x,y;
 cin>>x>>y;
 edges.push_back({x,y});
}
int u,v;
bool cycle = false;
for(auto i : edges){
    u = i[0];
    v = i[1];

    int p = find_sets(u);
    int q = find_sets(v);
    if(p == q){
        cycle = true;
        break;
    }
    else{
        union_sets(u,v);    
    }
}
if(cycle){
    cout<<"Cycle is present";

}
else{
    cout<<"Cycle is not present";
}
cout<<endl;
return 0;
}