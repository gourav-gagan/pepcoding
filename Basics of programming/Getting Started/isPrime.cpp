#include <iostream>
#include <math.h>
using namespace std;

//time O(log n)
bool isPrime(int n)
{
    //special case of 1
    if (n==1)
        return false;

    //observe all the divisors/factors of n are in pairs
    //factors(12) : 1 2 3 4 6 12 : (1*12) (2*6) (3*4) i.e loop upto 3 only i.e. sqrt(12)
    //we check divisors from 2 to inclusive sqrt(n)
    for (int i=2; i<=sqrt(n); i++)
        if (n%i == 0)
            return false;
    return true;
}

int main(int argc, char **argv){
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        if(isPrime(n))
            cout<<"prime";
        else if (!isPrime(n))
            cout<<"not prime";
        cout<<"\n";
    }
}