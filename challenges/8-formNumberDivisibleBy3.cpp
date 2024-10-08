#include<iostream>
#include<vector>
using namespace std;
void computeNumberFromSubarray(vector<int> arr, int k){
    pair<int, int> ans;
    int sum =0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    bool found = false;
    if(sum % 3 == 0){
        ans = make_pair(0, k);
        found = true;
    }

    for (int i = k; i < arr.size(); i++)
    {
        if(found){
            break;
        }
        sum = sum + arr[i] - arr[i-k];
        if(sum%3 ==0){
             ans = make_pair(i-k+1, i+1);
             found = true;
        }

    }
    if(!found){
        ans = make_pair(-1, 0);

    }
    if(ans.first == -1){
        cout<<"no such subarray exists"<<endl;
    }
    else{
      for (int i = ans.first; i <ans.second; i++)
      {
        cout<<arr[i];
      }
      cout<<endl;
    }
    
}
int main(){
    vector<int> arr= {1,7,3,6,9};
    int k =3;
    computeNumberFromSubarray(arr, k);
    return 0;
}