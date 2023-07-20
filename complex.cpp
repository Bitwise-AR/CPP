//Sum of complex no. by passing objects as function arguments

#include<iostream>

using namespace std;

class complex{
    int a;
    int b;
    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void setDataBySum(complex o1, complex o2){
            a=o1.a +o2.a;
            b=o1.b +o2.b;
        }

        void PrintNumber(){
            cout << "Your complex number is " << a << " + " << b << " i " <<endl;
        }

        void PrintSum(){
            cout << "The sum of complex number is " << a << " + " << b << " i " <<endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.PrintNumber();

    c2.setData(3, 4);
    c2.PrintNumber();

    c3.setDataBySum(c1, c2);
    c3.PrintSum();
    return 0;
}