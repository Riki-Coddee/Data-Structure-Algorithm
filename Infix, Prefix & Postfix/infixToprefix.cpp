#include<iostream>
#include<string>
#include<stack>
#include<math.h>
using namespace std;
int precedence(char ch){
    if (ch == '^')
    {
        return 3;
    }
    else if (ch =='*' || ch == '/')
    {
        return 2;
    }
    else if(ch == '+' || ch == '-')
    {
        return 1;
    }else{
        return -1;
    }
    
}
string infixtoPrefix(string s){
    stack<int> st;
    reverse(s.begin(), s.end());
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i]>='A' && s[i]<='Z')){
             res += s[i];
        }
        else if(s[i] == ')'){
            st.push(s[i]);
        } 
        else if(s[i] == '('){
           while (!st.empty() && st.top() != ')')
           {
              res += st.top();
              st.pop();
           }
           if(!st.empty()){
             st.pop();
             }
        }
        else{
             while (!st.empty() && precedence(st.top()) >= precedence(s[i]))
            {
              res += st.top();
              st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}
int main(){
 cout<<infixtoPrefix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}