//https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/sum-of-two-arrays-official/ojquestion
#include <iostream>
using namespace std;

int main()
{
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

    int n = max(n1, n2);
    int sum[n];

    int carry = 0;

    while (n>=1)
    {
        int digit;
        if (n1==0)
            digit = arr2[--n2] + carry;
        else if (n2==0)
            digit = arr1[--n1] + carry;
        else
            digit = arr1[--n1] + arr2[--n2] + carry;
        

        if (digit>=10)
        {
            sum[--n] = digit % 10;
            carry = 1;
        }
        else
        {
            sum[--n] = digit;
            carry = 0;
        }
    }

    if (carry)
    {
        cout<<carry<<endl;
    }
    for (int it : sum)
    {
        cout<<it<<endl;
    }
}