#include <iostream>

using namespace std;

void findelement(int arr[], int size, int element)
{   
    int i;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            cout << "Element found at " << i+1 << "th position";
            break;
        }
    }

    if (i == size)
    {
        cout << "Element Not Found\n";
    }
}

int main()
{
    int arr[100], size, i, element;

    cout << "Enter size of Array: ";
    cin >> size;
    cout << "Input " << size << " numbers \n";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the no. to search\n";
    cin >> element;
    findelement(arr,size,element);
    return 0;
}