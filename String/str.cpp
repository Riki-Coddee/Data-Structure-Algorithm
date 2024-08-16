#include<iostream>
#include<string>
#include<climits>
using namespace std;
int main(){
    string s = "abbbbccccddddeeeeeeeeee";
    int freq[26];
    for (int i = 0; i < 26; i++)
        freq[i] = 0;

        for (int i = 0; i < s.size(); i++)
        {
           freq[s[i] - 'a']++;
        }

    int maxlen = INT_MIN;
    char ans= 'a';
        for (int i = 0; i <  26; i++)
        {
            if(freq[i] > maxlen){
              maxlen = freq[i];
              ans = i + 'a';
            }
        }

        cout<<ans<<" "<<maxlen<<endl;
        
        
    return 0;

}