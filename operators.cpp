#include<iostream>
using namespace std;

int main() {
    int a=15, b=10;
    //Arithmetic operations
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is"<<--a<<endl;

    //Comparison operations
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;

    //Logical operations
    cout<<"The value of this logical AND operator ((a==b) && (a<b)) is :"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical OR operator ((a==b) || (a<b)) is :"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical NOT operator (!(a==b)) is :"<<(!(a==b))<<endl;
    
    }