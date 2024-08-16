#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
  public:
    int age;
    bool gender;
    void setName (string s){
        name = s;
    }
    void getName (){
        cout<<name<<endl;
    }
    student (){
        cout<<"Default Constructor"<<endl;
    }
    student(string n, int a, bool g){
        cout<<"Parameterized Consftructor"<<endl;
       name = n;
       age = a;
       gender = g;
    }
    student(const student &a){
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;

    }
    void printInfo(){
    cout<<"Name:";
    cout<<name<<endl;
    cout<<"age:";
    cout<<age<<endl;
    cout<<"Gender:";
    cout<<gender<<endl;
    }
    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
    }
    ~student(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
// student arr[3];
// for (int i = 0; i < 3; i++)
// { 
//     string s;
//     cout<<"Name:";
//     // cin>>arr[i].name;
//     cin>>s;
   
//     cout<<"age:";
//     cin>>arr[i].age;
//     cout<<"Gender:";
//     cin>>arr[i].gender;
    
// }
// for (int i = 0; i < 3; i++)
// {
//    arr[i].printInfo();
    
// }

// student a;
// a.setName("rahul");
// a.getName();

student a("Ram", 100, true);
a.printInfo();

student c= a;
c.printInfo();

if(c==a){
    cout<<"same"<<endl;
}
else{
    cout<<"Different"<<endl;
}
    return 0;
}