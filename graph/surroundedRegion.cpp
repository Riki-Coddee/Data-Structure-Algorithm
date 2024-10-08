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


void change(vector<vector<char>> &A, int x, int y){
    A[x][y] = '*';
    int dx[] = {0,0,-1,1};
    int dy[] = {1,-1,0,0};
    rep(i,0,4){
        int cx = x + dx[i];
        int cy = y + dy[i];
        if(cx>=0 && cx < A.size() && cy>=0 && cy < A[0].size() && A[cx][cy] == 'O'){
            change(A,cx,cy);
        }
    }
}
int main() {
int n,m;
cin>>n>>m;
vector<vector<char>> A(n, vector<char>(m));
rep(i,0,n){
    rep(j,0,m){
        cin>>A[i][j];
    }
}
rep(i,0,n){
    rep(j,0,m){
       if(i == 0 || i == n-1 || j == 0 || j == m-1){
        if(A[i][j] == 'O'){
            change(A,i,j);
        }
       }
    }
}
rep(i,0,n){
    rep(j,0,m){
       if(A[i][j] == 'O'){
        A[i][j] = 'X';
       }
    }
}
rep(i,0,n){
    rep(j,0,m){
        if(A[i][j] == '*'){
            A[i][j] = 'O';
        }
    }
}
rep(i,0,n){
    rep(j,0,m){
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}
