// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//         for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//              cin>>a[i][j];
        
//     }
     
//     // Spiral Order Matrix
//     int row_start = 0, row_end = n-1, col_start = 0, col_end = m-1;

//     while (row_start <= row_end && col_start <= col_end)
//     {
//        //  For row star
//     for (int  col = col_start; col <= col_end ; col++)
//     {
//        cout<<a[row_start][col]<<" ";
//     }
//     row_start++;
     
//     //  For column end
//     for (int row = row_start; row <= row_end; row++)
//     {
//         cout<<a[row][col_end]<<" ";
//     }
//      col_end--;
    
//     // For row end
//     for (int col = col_end; col >= col_start; col--)
//     {
//         cout<<a[row_end][col]<<" ";
//     }
//     row_end--;
    
//     // For column star
//     for (int row = row_end; row >= row_start; row--)
//     {
//         cout<<a[row][col_start]<<" ";
//     }
//     col_start++;

//     }
     
    
//     return 0;
// }

// Transpose
// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            cout<<a[j][i]<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n, m, n1, m1;
//     cout << "Enter dimensions of matrix A (n x m): ";
//     cin >> n >> m;
//     cout << "Enter dimensions of matrix B (n1 x m1): ";
//     cin >> n1 >> m1;;
   
//     if(m!=n1){
//         cout<<"Multiplication is impossible"<<endl;
//     }else{
//         // Input matrix A
//         int a[n][m];
//         cout << "Enter elements of matrix A:" << endl;
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cin >> a[i][j];
//             }
//         }

//         // Input matrix B
//         int b[n1][m1];
//         cout << "Enter elements of matrix B:" << endl;
//         for (int i = 0; i < n1; i++) {
//             for (int j = 0; j < m1; j++) {
//                 cin >> b[i][j];
//             }
//         }
//         int c[n][m1];
//         for (int i = 0; i < n; i++)
//         { 
//             for (int j = 0; j < m1; j++)
//             {
//              c[i][j] = 0;
//             }
            
//         }       
//          // Perform matrix multiplication
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m1; j++) {

//                 for (int k = 0; k < m; k++) {
//                     c[i][j] += a[i][k] * b[k][j];
//                 }
//             }
//         }

//     for (int i = 0; i < n; i++)
//         { 
//             for (int j = 0; j < m1; j++)
//             { 
//                 cout<<c[i][j]<<" "; 
//         }
//          cout << endl;
//     }
// }
//     return 0;
// }

// Searching key in sorted 2d array
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int target;
//     cin>>target;
//     int mat[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//           cin>>mat[i][j];
//         }
        
//     }
//     int r=0,c=m-1;
//     while (r < n && c >=0 )
//     {
//         if(mat[r][c]==target){
//          cout<<"Found at"<<" "<<r<<"and"<<c;
//          return 0;
//          }
//         if (mat[r ][c] > target)
//         {
//             c--;
//         }
//         else 
//         r++;
        
//     }
//     cout<<"not found";
//     return 0;
// }