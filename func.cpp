#include<iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main(){
    int n1, n2;
    cout << "Enter num1 : " ;
    cin>>n1;
    cout << "Enter num2 : " ;
    cin>>n2;
    cout << "The sum of " << n1 << " and " << n2 << " is " << sum(n1,n2) << endl;
    return 0;
}