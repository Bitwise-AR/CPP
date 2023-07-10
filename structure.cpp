#include<iostream>

using namespace std;

typedef struct employee
    {
        int empid;
        char favchar;
        float salary;
    }ep;

int main(){
    struct employee shyam;
    shyam.empid=45;
    shyam.favchar='s';
    shyam.salary=150000;
    cout<<"The id of shyam is "<<shyam.empid<<endl;
    cout<<"The favchar of shyam is "<<shyam.favchar<<endl;
    cout<<"The salary of shyam is "<<shyam.salary<<endl;

    ep ram;
    ram.empid=69;
    ram.favchar='a';
    ram.salary=200000;
    cout<<"The id of ram is "<<ram.empid<<endl;
    cout<<"The favchar of ram is "<<ram.favchar<<endl;
    cout<<"The salary of ram is "<<ram.salary<<endl;
    
    return 0;
}