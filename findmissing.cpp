#include <bits/stdc++.h>
using namespace std;


void MissingNumber(int arr[], int n)
{

    int total = (n) * (n + 1) / 2;
    for (int i = 0; i < n; i++)
        total -= arr[i];
    cout << abs(total) << endl;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    MissingNumber(arr, n);
    
}
