#include <iostream>
#include <vector>
using namespace std;

//0 1 1 2 3
//fibonacci
int fibonacci(int n)
{
    int nums[n];
    nums[0]=0;
    nums[1]=1;

    for (int i=2; i<=n; i++)
    {
        nums[i] = nums[i-1] + nums[i-2];
    }

    int output = nums[n-1];
    return output;
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);
}

            //cout<<count<<" "<<fibonacci(count)<<" ";