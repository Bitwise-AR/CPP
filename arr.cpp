#include<iostream>

using namespace std;

int main(){
    int marks[] = { 80, 91, 72, 67};
    cout << marks[0]<<endl;
    cout << marks[1]<<endl;
    cout << marks[2]<<endl;
    cout << marks[3]<<endl;

    marks[2]=55;
    cout << marks[2]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of "<<i+1<<"st marks is :" <<marks[i]<<endl; 
    }
    
    return 0;
}