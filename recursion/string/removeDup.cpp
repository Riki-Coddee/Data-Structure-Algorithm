// #include<iostream>
// #include<string>
// using namespace std;
// string removeDuplicate(string s){
//      if(s.length() == 0){
//         return "";
//      }
//      char ch = s[0];
//      string ans = removeDuplicate(s.substr(1));

//      if(ch == ans[0]){
//         return ans;
//      }
//      return ch + ans;
// }
// int main(){
//     cout<<removeDuplicate("abcdddeeefffggg");
//     return 0;
// }

// move all x to the last 
#include<iostream>
#include<string>
using namespace std;
string moveAllX(string s){
    if(s.length() == 0){
     return "";
    }
    char ch = s[0];
    string ans = moveAllX(s.substr(1));
    if(ch == 'x'){
      return ans + ch;
    }
        return ch + ans;
            
}
int main(){
 cout<<moveAllX("xxxhhhnnxxxhshs");
return 0;
}