#include<iostream>

using namespace std;

//Call by reference using pointers
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a=4, b=5;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swap(&a, &b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}