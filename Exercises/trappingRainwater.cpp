#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int rain_water(vector<int> a){
    stack<int> st;
    int n = a.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[st.top()] < a[i])
        {
            int cur = st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int diff = i - st.top() -1;
            ans += (min(a[st.top()], a[i]) - a[cur]) * diff;
        }
st.push(i);        
    }
    return ans;
}
int main(){
    vector<int> a ={2,1,2};
    cout<<rain_water(a)<<endl;
    return 0;
}