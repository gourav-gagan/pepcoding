//https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/first-index-last-index-official/ojquestion
#include<iostream>
using namespace std;

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

    //Binary Search to find first index
    int first_index = -1;
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if (data < arr[mid])
        {
            high = mid-1;
        }
        else if (data > arr[mid])
        {
            low = mid+1;
        }
        else
        {
            first_index = mid;  //potential answer
            high = mid - 1; //check previous index
        }
    }

    //binary search fo last element
    int last_index = -1;
    low=0;
    high=n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if (data < arr[mid])
        {
            high = mid-1;
        }
        else if (data > arr[mid])
        {
            low = mid+1;
        }
        else
        {
            last_index = mid;   //potential answer
            low = mid + 1;      //check next index
        }
    }

    cout<<first_index<<endl<<last_index;
}