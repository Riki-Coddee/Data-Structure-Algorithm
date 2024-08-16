// Reverse of number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//      int reverse=0;
//     while(n>0){
//         int lastdigit = n%10;
//         reverse = reverse*10 + lastdigit;
//         n = n/10;
//     }
//         cout<<reverse;
//     return 0;
// }

// Fib0onacci
// #include<iostream>
// using namespace std;
// void printFibonacci(int n){
//    int t1=0;
//    int t2=1;
//    int nextTerm,i;
//    for(i=1;i<=n;i++){
//     cout<<t1<<" ";
//     nextTerm = t1+t2;
//     t1=t2;
//     t2=nextTerm;
//    }
// };
// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//      printFibonacci(n);
//     return 0;
// }

// Factorial
// #include<iostream>
// using namespace std;
// int printFactorial(int n){
//     int fact ;
//     if(n<=1){
//         return 1;
//     }
//     return fact = n* printFactorial(n-1);
// };
// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     int a = printFactorial(n);
//     cout<<a;
//     return 0;
// }

#include<iostream>
using namespace std;
int factorial(int n){
    int fact ;
    if(n<=1){
        return 1;
    }
    return fact = n* factorial(n-1);
};
// int main(){
//     int n,r;
//     cout<<"Enter the number"<<endl;
//     cin>>n>>r;
//     int factn = printFactorial(n);
//     int factr = printFactorial(r);
//     int factNr = printFactorial(n-r);
//     int nCr = factn/(factNr*factr);
//     cout<<nCr;
//     return 0;
// }


// Function to calculate binomial coefficient
int binomialCoefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int r;
    cout << "Enter the number of rows: ";
    cin >> r;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j <= i; j++) {
            cout << binomialCoefficient(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}

