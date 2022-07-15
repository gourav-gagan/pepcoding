#include<iostream>
using namespace std;

int binarySeach(int arr[], int low, int high, int data)
{
    int mid;

    while (low <= high)
    {
        mid = (low + high)/2;
        if (data == arr[mid])
        {
            return mid;
        }

        if (data < arr[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
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

    int data;
    cin>>data;

    cout<<binarySeach(arr, 0, n-1, data);
}