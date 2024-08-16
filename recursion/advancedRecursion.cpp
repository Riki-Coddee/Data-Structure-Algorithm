// #include<iostream>
// #include<string>
// using namespace std;
// void permutation(string s, string ans){
//  if(s.length() == 0){
//     cout<<ans<<endl;
//     return;
//  }
//  for (int i = 0; i < s.length(); i++)
//  {
//     char ch = s[i];
//     string ros = s.substr(0,i) + s.substr(i+1);
//     permutation(ros, ans + ch);
//  }
 
// }
// int main(){
//     permutation("ABC", "");
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int countPath(int s, int e){
//     if (s == e )
//     {
//        return 1;
//     }
//     if(s>e){
//         return 0;
//     }
//     int count = 0;
//     for (int i = 1; i <= 6; i++)
//     {
//       count += countPath(s+1,e);
//     }
//     return count;
    
    
// }
// int main(){
//     cout<<countPath(0,3)<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int countPathMaze( int n, int i, int j){
//     if(i == n-1 && j == n-1){
//         return 1;
//     }
//     if(i>n-1 ||  j>n-1){
//         return 0;
//     }
//     return countPathMaze(n,i+1,j) + countPathMaze(n,i,j+1);
// }
// int main(){
//     cout<<countPathMaze(3,0,0);
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int tilingways(int n){
//     if(n==0){
//       return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return tilingways(n-1) + tilingways(n-2);
// }
// int main(){
//     cout<<tilingways(4);
//     return 0;
// }

#include<iostream>
#include<string>
#include<climits>
using namespace std;
int knapsack(int value[], int wt[], int n, int W){
if( n == 0 || W == 0){
 return 0;
}
if(wt[n-1] > W){
    return knapsack(value, wt, n-1, W);
}
return max(knapsack(value, wt, n-1, W-wt[n-1])+ value[n-1], knapsack(value, wt, n-1, W));
}
int main(){
    int value[] ={100, 50, 150 };
    int wt[] = {10, 20, 30};
    
    cout<<knapsack(value, wt, 3, 50);
    return 0;
}