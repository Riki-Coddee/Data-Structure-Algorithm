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
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second 
#define setBits(x) builtin_popcount(x)

int main(){
    int n;
    cin >> n;
    vi a(n);
    rep(i,0,n){
        cin >> a[i];
    }
priority_queue<int, vector<int>, greater<int>> minheaps;
    rep(i,0,n){
        minheaps.push(a[i]);
    }

    int ans = 0;
    while (minheaps.size() > 1)
    {
         int e1 = minheaps.top();
         minheaps.pop();
         int e2 = minheaps.top();
         minheaps.pop();

         ans += e1+e2;
         minheaps.push(e1 + e2);
    }
    cout<<ans <<endl;
    return 0;
}