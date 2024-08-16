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
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
map<int, int> freq;
for (int i = 0; i < n; i++)
{
    freq[arr[i]]++;
}

map<int, int> :: iterator it;
for (it = freq.begin(); it != freq.end(); it++)
{
    cout<< it->ff << " " << it->ss<<endl; 
}

    return 0;
}