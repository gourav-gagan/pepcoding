//Decimal to any base
//2<base<=10
#include <iostream>
using namespace std;

int baseCoversion(int n, int b)
{
    int result = 0;

    int power = 1;
    while (n>0)
    {
        result = result + (n % b)*power;
        n = n / b;
        power = power*10;
    }
    return result;
}

int main()
{
    int n,b;
    cin>>n>>b;
    cout<<baseCoversion(n,b);
}