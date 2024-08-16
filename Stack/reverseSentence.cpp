#include<iostream>
#include<stack>
using namespace std;
void reverseSentence(string s){
stack<string> st;
int i = 0;
cout<<s.length()<<endl;
for (int i = 0; i < s.length(); i++)
{
    
     
     string word = "";   
 while (s[i]!=' ' && i<s.length())
 {
       word += s[i];
       i++;
 }
 st.push(word);
}
 while (!st.empty())
 {
   cout<<st.top()<<" ";
   st.pop();
 }
 cout<<endl;
}
int main(){
    string s = "Hey! How are you doing?";
    reverseSentence(s);
    return 0;
}