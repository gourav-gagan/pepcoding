//https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/any-base-to-any-base-official/ojquestion
// any base to any base
// 2<base<=10
#include <iostream>
using namespace std;

int anyBaseToDeci(int number, int base)
{
    int result=0;

    int power=1;
    while (number>0)
    {
        int digit = number % 10;
        result += digit*power;
        power = power*2;
        number = number/10;        
    }

    return result;
}

int deciToAnyBase(int number, int base)
{
    int result=0;

    int power=1;
    while (number>0)
    {
        int r = number % base;
        result += r*power;
        power = power*10;
        number = number/base;
    }

    return result;
}


int baseConversion(int number, int base, int toBase)
{
    return deciToAnyBase(anyBaseToDeci(number, base), toBase);
}

int main()
{
    int n,b1,b2;
    cin>>n>>b1>>b2;
    cout<<baseConversion(n, b1, b2);
}