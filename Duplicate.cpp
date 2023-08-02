#include <iostream>

using namespace std;

void Duplicate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << endl;
                break;
            }
        }
    }
}

int main()
{
    int arr[] = {2, 7, 6, 5, 7, 9, 2, 11, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Duplicate entries are: "<<endl;
    Duplicate(arr, n);

    return 0;
}