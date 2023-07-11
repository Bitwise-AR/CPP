#include<iostream>

using namespace std;

//Call by reference using variables
void swapvar(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a=4, b=5;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swapvar(a, b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}