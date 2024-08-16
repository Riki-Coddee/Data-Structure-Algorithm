#include<iostream>
#include<string>
#include<math.h>
#include<stack>
using namespace std;
int prefixEvaluation(string s){
    stack<int> st;
    for (int i = s.length()-1; i >=0; i--)
    {
        if(s[i]>='0' && s[i]<='9'){
              st.push(s[i] - '0');
        }
        else{
            int operator1 = st.top();
            st.pop();
            int operator2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(operator1 + operator2);
                break;
            case '-':
                st.push(operator1 - operator2);
                break;
            case '*':
            st.push(operator1 * operator2);
            break;    
            case '/':
            st.push(operator1 / operator2);
            break;    
            case '^':
            st.push(pow(operator1,operator2));
            break;    
            
            default:
            return -1;
            }
        }
    }
    return st.top();
}
int main(){
    cout<<prefixEvaluation("-+7*45+20")<<endl;
    return 0;
}