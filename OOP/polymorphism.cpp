#include<iostream>
using namespace std;
class Complex{
    int real;
    int imag;
    public:
     Complex(int r=0, int i=0){
        real = r;
        imag = i;
     }
     Complex operator +(Complex const &obj){
        Complex res;
        res.real = real + obj.real;
        res.imag =  imag + obj.imag;
        return res;
     }
     void display(){
        cout<<real<<" + i"<<imag<<endl;
     }
};
int main(){
Complex a(6,9), b(4, 8);
Complex c =a + b;
c.display();
    return 0;
}