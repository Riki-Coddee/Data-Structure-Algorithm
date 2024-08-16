// #include<iostream>
// using namespace std;

// int main(){
//     int i,j,rows, columns;
//     cin>>rows>>columns;
//       for(i=1;i<=rows;i++){
//         for(j=1;j<=columns;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//       }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i,j,rows, col;
//     cin>>rows>>col;
//       for(i=1;i<=rows;i++){
//         for(j=1;j<=col;j++){
//             if(i==1 || i==rows){
//                 cout<<"*";
//             }
//             else if(j==1 || j==col){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//       }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i,j,rows, col;
//     cin>>rows;
//       for(i=1;i<=rows;i++){
//         for(j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//       }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int i,j,rows, col;
//     int count =1;
//     cin>>rows;
//       for(i=1;i<=rows;i++){
//         for(j=1;j<=i;j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//       }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i,j,rows;
//     cin>>rows;
//       for(i=1;i<=rows;i++){
//         for(j=1;j<=i;j++){
//             cout<<"*";
//         }
//          int space = 2*rows - 2*i;
//          for ( j = 1; j <= space; j++)
//          {
//             cout<<" "; 
//          }
//          for(j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//       }
//       for(i=rows;i>=1;i--){
//         for(j=1;j<=i;j++){
//             cout<<"*";
//         }
//          int space = 2*rows - 2*i;
//          for ( j = 1; j <= space; j++)
//          {
//             cout<<" "; 
//          }
//          for(j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//       }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i,j,rows, col;
//     int count =1;
//     cin>>rows;
//       for(i=rows;i>=1;i--){
//         for(j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//       }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i,j,rows, col;
//     int count =1;
//     cin>>rows;
//       for(i=1;i<=rows;i++){
//         for(j=1;j<=i;j++){
//             if((i+j)%2==0){
//             cout<<"1";
//             }
//             else{
//                 cout<<"0";
//             }
//         }
//         cout<<endl;
//       }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i,j,rows, col;
//     int count =1;
//     cin>>rows;
//       for(i=1;i<=rows;i++){
//        for(j=1; j <= rows-i; j++){
//         cout<<" ";
//        }
//        for(j=1;j<=rows;j++){
//         cout<<"*";
//        }
//         cout<<endl;
//       }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i,j,rows;
//     int count =1;
//     cin>>rows;
//       for(i=1;i<=rows;i++){
//        for(j=1; j <= rows-i; j++){
//         cout<<" ";
//        }
//        for(j=1;j<=i;j++){
//         cout<<j<<" ";
//        }
//         cout<<endl;
//       }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i,n;
//     cin>>n;
//       for(i=1;i<=n;i++){
//         int j;
//        for(j=1; j <= n-i; j++){
//         cout<<" "<<" ";
//        }
//        int k = i;
//        for(;j<=n;j++){
//         cout<<k--<<" ";
//        }
//        k=2;
//        for(;j<=n+i-1;j++){
//           cout<<k++<<" ";
//        }
//         cout<<endl;
//       }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i,rows;
//     cin>>rows;
//       for(i=1;i<=rows;i++){
//         int j;
//        for(j=1; j <= rows-i; j++){
//         cout<<" ";
//        }
//        for(j=1;j<=2*i-1;j++){
//         cout<<"*";
//        }
//         cout<<endl;
//       }
//       for(i=rows;i>=1;i--){
//         int j;
//        for(j=1; j <= rows-i; j++){
//         cout<<" ";
//        }
//        for(j=1;j<=2*i-1;j++){
//         cout<<"*";
//        }
//        cout<<endl;
//       }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
int i,j,rows;
cout<<"Enter the numbers of row";
cin>>rows;

for (i=1;i<=rows;i++){
 for(j=1;j<=3*rows;j++){
  if((i+j)%4==0){
    cout<<"*";
  }
  else if(i==2 && j%4==0){
    cout<<"*";
  }
  else{
    cout<<" ";
  }
 }
 cout<<endl;
}
return 0;
}