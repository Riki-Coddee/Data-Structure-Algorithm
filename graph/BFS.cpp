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
bool vis[N];
vi adj[N];
int main(){
for (int i = 0; i < N; i++)
       vis[N] = 0;
int n, e;
cin>>n>>e;

int x, y;
for (int i = 0; i < e; i++)
{
  cin>>x>>y;
  adj[x].push_back(y);
  adj[y].push_back(x);
}
queue<int> q;
q.push(1);
vis[1] = true;
while (!q.empty())
{
    int node = q.front();
    q.pop();
    cout<<node<<" ";

    vector<int> :: iterator it;
    for (it = adj[node].begin(); it !=  adj[node].end(); it++)
    {
        if(!vis[*it]){
          vis[*it] = true;
          q.push(*it);
        }
    }
     
}
cout<<endl;
    return 0;
}