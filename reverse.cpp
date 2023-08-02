#include <iostream>

using namespace std;

void reverse(int arr[], int size)
{   
    int i=0;
    int j=size-1;
    while (i <= j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<"Reversed array: "<<endl;
    for (int i=0; i < 6; i++){
        cout<<arr[i]<<" ";
    } 
} 

int main()
{   
    int arr[] = {1, 2, 3, 4, 5, 6};
    cout<<"Original array: "<<endl;
    for (int i=0; i < 6; i++){
        cout<<arr[i]<<" ";
    } 
    cout<<"\n"<<endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, size);
    return 0;
}