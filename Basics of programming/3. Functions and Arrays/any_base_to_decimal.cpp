//any Base to Decimal
//2<base<=10
#include <iostream>
using namespace std;

int baseCoversion(int n, int b)
{
    int result = 0;

    int power = 1;
    while (n>0)
    {
        result = result + (n % 10)*power;
        n = n / 10;
        power = power*b;
    }
    return result;
}

int main()
{
    int n,b;
    cin>>n>>b;
    cout<<baseCoversion(n,b);
}