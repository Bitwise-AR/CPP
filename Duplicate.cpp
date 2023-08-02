#include <iostream>

using namespace std;

void Duplicate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
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
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Duplicate entries are: "<<endl;
    Duplicate(arr, size);

    return 0;
}