#include<iostream>

using namespace std;

//In union only one of the value could be used at a time
union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
    union money m1;
    m1.rice = 100;
    cout << m1.rice << endl;
    return 0;
}