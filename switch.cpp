#include<iostream>

using namespace std;

int main(){
    int age;
    cout << "Enter age: ";
    cin>>age;
    switch(age){
        case 1:
            cout << "You are an infant"<<endl;
            break;
        case 7:
            cout << "You are a kid"<<endl;
            break;
        case 13:
            cout << "You are a teenager"<<endl;
            break;
        case 17:
            cout << "You are an adolescent"<<endl;
            break;
        case 22:
            cout << "You are an adult"<<endl;
            break;
        case 67:
            cout << "You are a senior citizen"<<endl;
            break;
        default:
            cout << "No such special cases."<<endl;
            break;
    }
    return 0;
}