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
vvi graph = {{0, 5, INF, 10}, 
             {INF, 0, 3, -1},
             {INF, INF,0, 1},
             {INF, INF, INF, 0}};
int n = graph.size();
vvi dist = graph;
rep(k,0,n){
    rep(i,0,n){
        rep(j,0,n){
            if(dist[i][j] > (dist[i][k] + dist[k][j]) ){
                dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
}

rep(i,0,n){
    rep(j,0,n){
        if(dist[i][j] == INF){
            cout<<"INF"<<" ";
        }
        else{
            cout<<dist[i][j]<<" ";
        }
    }
    cout<<endl;
}
    return 0;
}
