#include <iostream>
using namespace std;

int find(int arr[], int n, int el)
{
    for (int i=0; i<n; i++ )
    {
        if (arr[i]==el)
            return i;
    }

    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int el;
    cin>>el;
    cout<<find(arr, n, el);
}