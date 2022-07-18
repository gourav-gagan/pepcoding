#include <iostream>
using namespace std;

int main()
{
    //inputs
    int n; 
    cin>>n;
    int m=n;
    int arr[n][m];
    for (int i=0; i<n; i++)
    {
        for (int j=0 ;j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    
    //binary search on 2d array
    int i=0;
    int j=m-1;
    while (target!=arr[i][j])
    {
        if (target>arr[i][j])
        {
            i++;
        }
        else
        {
            j--;
        }
        if (i>n || j<0)
        {
            cout<<"Not Found";
            return 0;
        }
    }
    cout<<i<<endl<<j;
}