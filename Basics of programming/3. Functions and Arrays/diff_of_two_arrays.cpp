#include <iostream>
using namespace std;

int main()
{
    //input arrays
    int n1;
    cin>>n1;
    int arr1[n1];
    for (int i=0; i<n1; i++)
        cin>>arr1[i];
    int n2;
    cin>>n2;
    int arr2[n2];
    for (int i=0; i<n2; i++)
        cin>>arr2[i];

    //create new array for storing digits
    int diff[n2];

    //subtracting
    int i = n1 - 1;
    int j = n2 - 1;
    int carry = 0;
    while (j>=0)
    {
        int digit = 0;
        int arr1_digit = (i>=0 ? arr1[i] : 0); //case when arr1 underflows

        if (arr2[j] + carry >= arr1_digit)
        {
            digit = arr2[j] + carry - arr1_digit;
            carry = 0;
        }
        else
        {
            digit = arr2[j] + 10 + carry - arr1_digit;
            carry = -1;
        }

        diff[j] = digit;

        i--;
        j--;
    }

    //check for leading zero
    int ind=0;
    while (diff[ind]==0)
        ++ind;
    //print rest diff
    int n = sizeof(diff)/sizeof(int);
    for (int i=ind; i<n; i++)
        cout<<diff[i]<<endl;
}