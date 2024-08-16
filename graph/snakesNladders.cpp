#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
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
int snakes, ladders;
cin>>snakes>>ladders;
map<int, int> lad;
map<int, int> snk;

rep(i,0,ladders){
    int u, v;
    cin>>u>>v;
    lad[u] = v;
}
rep(i,0,snakes){
    int u,v;
    cin>>u>>v;
    snk[u] = v;
}
queue<int> q;
q.push(1);
int moves = 0;
bool found  =false;
vector<int> vis(101,0);
vis[1] =true;
while (!q.empty() && !found)
{
    int sz = q.size();
    while(sz--){
        int t = q.front();
        q.pop();
        for(int die=1; die<=6;die++){
            if(t+die == 100){
                found = true;
                break;
            }
            if((t+die) <=100 && !vis[t+die] && lad[t+die]){
                if(lad[t+die] == 100){
                    found = true;
                }
                q.push(lad[t+die]);
            } 
            else if((t+die) <= 100 && !vis[snk[t+die]] && snk[t+die]){
                if(snk[t+die] == 100){
                    found = true;
                }
                q.push(snk[t+die]);
            }
            else if((t+die)<=100 && !vis[(t+die)]){
                vis[t+die] = true;
             q.push(t+die);
            }
        }
    }    
    moves++;
}
if(found){
    cout<<moves<<endl;
}
else{
    cout<<"-1"<<endl;
}
    return 0;
}
