#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n;cin>>n;
    int k; cin>>k;
    vector<int> a(n);
    for (auto &i : a){
        cin>>i;
        }
    
    int ans =0, countzeros = 0, i=0;
    for (int j = 0; j < n; j++)
    {
        if(a[j] == 0){
        countzeros++;
        }

        while (countzeros > k)
        {
            if(a[i] == 0){
                countzeros--;
            }
            i++;
        }
        ans = max(ans, j-i+1);
    }
    
    cout<<ans<<endl;

    return 0;
}
