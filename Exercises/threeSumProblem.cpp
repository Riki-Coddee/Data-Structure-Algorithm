// two pointer technique
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n; cin>>n;
    int target; cin>>target;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
        bool found =false;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
           int low = i+1, hi = n-1;
           while (low<hi)
           {
            int current = a[i] + a[low] + a[hi];
            if(current == target){
                found = true;
                break;
            }
            else if(current < target){
                low++;
            }
            else if(current > target){
                hi--;
                }
           }
           if(found){
            break;
           }
        }
        if(found)
           { cout<<"True";}
        else
            {cout<<"False";}

    return 0;
}