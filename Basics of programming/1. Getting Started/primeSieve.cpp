#include <iostream>
#include <math.h>
using namespace std;

//using sieve of erosthenes
void countPrime(int n)
{
    int count=0;

    if (n==0 || n==1)
    {
        cout<<count;
        return;
    }

    bool isPrime[n];
    for (int i=0; i<n; i++) isPrime[i]=true;

    isPrime[0]=isPrime[1]=false;
    for (int i=2; i<sqrt(n); i++)
    {
        if (isPrime[i]==true)
        {
            for (int j=i*i; j<=n; j=j+i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (bool el: isPrime)
    {
        if(el)
            count++;
    }

    cout<<count;
}

int main()
{
    countPrime(100);
}