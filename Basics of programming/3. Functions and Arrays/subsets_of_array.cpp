//https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/subsets-of-array-official/ojquestion
#include <iostream>
#include <math.h>
using namespace std;

/*

int range = pow(2, n-1);

2^2 2^1 2^0             
0   0   0       0       
0   0   1       1       
0   1   0       2       
0   1   1       3       
1   0   0       4       
1   0   1       5       
1   1   0       6       
1   1   1       7       

*/

void subsets(int arr[], int n)
{
    int range = pow(2, n);
    for (int i=0; i<range; i++)
    {
        int x = n;
        int temp = i;
        int binary[x];
        while (x>0)
        {
            binary[--x] = temp%2;
            temp = temp/2;
        }
        for (int j=0; j<n; j++)
        {
            if (binary[j])
                cout<<arr[j]<<"\t";
            else
                cout<<"-\t";
        }
        cout<<endl;
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
    subsets(arr, n);
}