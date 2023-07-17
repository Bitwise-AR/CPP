#include <iostream>
#include <string>

using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_swap(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a number: ";
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary format " << endl;
            exit(0);
        }
    }
}
void binary :: ones_swap(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << "Swapping..." << endl;
}

void binary :: display(void)
{
    cout << "Displaying Binary number... " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

    int main()
    {
        binary b;
        b.read();
        b.chk_bin();
        b.display();
        b.ones_swap();
        b.display();
        return 0;
    }