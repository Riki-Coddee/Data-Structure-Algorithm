#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isValid(string s){
  stack<char> st;
  bool ans = true;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '{' || s[i] == '[' || s[i] == '(')
    {
        st.push(s[i]);
    }
    else if (s[i]=='}')
    {
        if(st.top() == '{'){
            st.pop();
        }
        else{
            ans = false;
            break;
        }
    }
    else if(s[i] == ']')
    {
        if(st.top() =='[' ){
            st.pop();
        }
        else{
            ans = false;
            break;
        }
    }
    else if(s[i] == ')')
    {
        if(st.top() =='(' ){
            st.pop();
        }
        else{
            ans = false;
            break;
        }
    }
    
  }
  return ans;
}
int main(){
    string s= "{[()]}";
    isValid(s) ? cout<<"Balanced Parenthesis"<<endl : cout<<"Not balanced Parenthesis"<<endl;
    return 0;
}