#include<iostream>
#include<string>
using namespace std;
string subArr(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return ans;
    }
    char ch = s[0];
    string ros = s.substr(1);
    subArr(ros, ans);
    subArr(ros, ans+ch);
}
int main(){
    subArr("ABCD","");
    return 0;
}