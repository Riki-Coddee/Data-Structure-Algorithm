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
vi adj[N];
int main(){
    //Graph Representation


//Adjacent Matrix Representation
int n,e;
cin>>n >> e;
vvi adjm(n+1, vi(n+1, 0));
rep(i, 0, e){
int x,y;
cin>>x>>y;
adjm[x][y] = 1;
adjm[y][x] = 1;
}

cout<<"adjacency matrix of above graph is given by:"<<endl;

rep(i, 1, n+1){
    rep(j,1,n+1){
        cout<<adjm[i][j] <<" ";
    }
    cout<<endl;
}

//Adjacent List Representation
cin>>n >> e;

vi adj[10];
rep(i, 0, e){
    int x,y;
    cin>>x>>y;

    adj[x].push_back(y);
    adj[y].push_back(x);
}
cout<<"adjacent List of the above graph is below:"<<endl;
rep(i,1,n+1){
    cout<<i<<"->";
    vector<int> :: iterator it;
    for (it = adj[i].begin(); it !=adj[i].end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
    return 0;
}