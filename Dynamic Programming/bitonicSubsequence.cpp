#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vvi vector<vi>
const int N= 1e3+2, MOD = 1e9+7;

int main(){
int n = 8;
vector<int> a = {1,11,2,10,4,5,2,1};
vector<int> forward(n, 1), backward(n, 1);
rep(i,0,n){
    rep(j,0,i){
        if(a[i] > a[j]){
            forward[i] = max(forward[i], 1 + forward[j]);
        }
    }
}
for (int i = n-1; i >=0; i--)
{
    for (int j = n-1; j>i; j--)
    {
        if(a[i] > a[j]){
            backward[i] = max(backward[i], 1 + backward[j]);
        }
    }
    
}
int ans = 0;
rep(i,0,n){
ans = max(ans, forward[i] + backward[i] - 1);
}
cout<<ans<<endl;
    return 0;
}