#include<iostream>

using namespace std;

//fibbonacci series' term at a certain position with recursion

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    int num;
    cout << "Enter a number: " ;
    cin >> num;
    cout << "The term in fibbonacci series at position " << num << " is: " << fib(num)<< endl;
    return 0;
}