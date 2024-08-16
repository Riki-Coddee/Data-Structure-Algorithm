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
cin>>n;

vector<int> a(n);
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
sort(a.begin(), a.end(), greater<int>());
int x;
cin>>x;

int ans = 0;
for (int i = 0; i < n; i++)
{
    ans += x/a[i];
    x -= x/a[i] * a[i];
}

    cout<<ans<<endl;
    return 0;
}