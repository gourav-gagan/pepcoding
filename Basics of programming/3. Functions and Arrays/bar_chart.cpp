//https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/bar-chart-official/ojquestion
#include <iostream>
using namespace std;

void bar_chart(int arr[], int n)
{
    int height=arr[0];
    for (int i=1; i<n; i++)
    {
        if (height < arr[i])
            height = arr[i];
    }

    for (int i=0; i<height; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (height - arr[j] <= i)
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
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
    bar_chart(arr, n);
}