#include<iostream>
#include<stack>
#include<vector>
#include<climits>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> dict(256,-1);
    int start = -1, len = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(dict[s[i]] > start)
             start = dict[s[i]];
            dict[s[i]] = i;
        len = max(len, i - start);
    }
    cout<<len<<endl;
    return 0;
}