// 0	
// 1	1	
// 2	3	5	
// 8	13	21	34	
// 55	89	144	233	377	

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int nums[n];
    nums[0]=0;
    nums[1]=1;

    for (int i=2; i<=n; i++)
        nums[i] = nums[i-1] + nums[i-2];

    int output = nums[n-1];
    return output;
}

int main()
{
    int n;
    cin>>n;

    int count=0;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            count++;
            cout<<fibonacci(count)<<"\t";
        }
        cout<<endl;
    }
}