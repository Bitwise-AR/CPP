#include<iostream>

using namespace std;

int main(){
    int age;
    cout << "Enter age: ";
    cin>>age;
    if ((age<18) && (age>0)){
        cout<<"You cannot come to the party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and will get kid pass only"<<endl;
    }
    else if(age<1){
        cout<<"You are not born yet"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }
    return 0;
}