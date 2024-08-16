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
const int N= 1e5+2;
vi indeg(N,0);
int main(){
int n,e;
int cnt =0;
cin>>n>>e;
vector<vector<int>> adj(n);
int x,y;
rep(i,0,e){
cin >> x >>y;
adj[x].push_back(y);
indeg[y]++;
}
queue<int> q;
rep(i,0,n){
    if(indeg[i] == 0)
       q.push(i);
}
while (!q.empty())
{
    cnt++;
    int x = q.front();
    q.pop();

    cout<<x<<" ";
    for(auto it : adj[x]){
        indeg[it]--;
        if(indeg[it] == 0){
            q.push(it);
        }
    }
}

    return 0;
}