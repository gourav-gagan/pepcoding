//ip: 1440
//op: 2 2 2 2 2 3 3 5

#include <iostream>

using namespace std;

void primeFactors(int n)
{
    for (int div=2; div*div<=n; div++)
    {
        while (n % div == 0)
        {
            cout<< div <<" ";
            n = n / div;
        }
    }

    if (n!=1)
    {
        cout<<n;
    }
}

int main()
{
    int n;
    cin>>n;
    primeFactors(n);
}