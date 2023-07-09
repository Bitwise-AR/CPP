#include <iostream>
using namespace std;

int main() 
{
    int num,i=1;
    cout << "Input a number :";
    cin>>num;
    
    do{
        cout<<num<<" X "<<i<<" = "<<num*i<<" "<<endl;
        i++;
    }while(i<=10);
    return 0;
}
