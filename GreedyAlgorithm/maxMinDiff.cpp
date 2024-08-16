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
vi a(n);
for(auto &i: a){
    cin >> i;
}
sort(a.begin(), a.end());
long long mx=0, mn=0;
rep(i, 0, n/2){
    mx += (a[i+n/2] - a[i]);
    mn += (a[2*i+1] - a[2*i]);
}
cout<< mx<<endl;
cout<<mn<<endl;
    return 0;
}