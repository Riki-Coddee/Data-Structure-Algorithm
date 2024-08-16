#include <iostream>
#include <deque>
#include <vector>
#include <set> // Include set for using multiset

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n); // Declare a vector of size n to store elements
    for (auto &i : a) {
        cin >> i; // Read n elements into vector a
    }
    
    deque<int> q;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        while (!q.empty() && a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);
    for (int i = k; i < n; i++)
    {
        if(q.front() == i-k){
            q.pop_front();
        }
        while (!q.empty() && a[q.back()] < a[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
        
    }
    for (auto i : ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    

    return 0;
}
