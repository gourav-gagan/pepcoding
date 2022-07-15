//https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/any-base-subtraction-official/ojquestion
#include <iostream>
using namespace std;

int subtract(int base, int num1, int num2)
{
    int result = 0;
    int carry = 0;
    int power = 1;
    
    while (num2 > 0)
    {
        int d1, d2;

        d2 = num2 % 10;
        num2 = num2 / 10;
        d1 = num1 % 10;
        num1 = num1 / 10;

        int d = 0;
        d2 = d2 + carry;

        if (d2 >= d1)
        {
            carry = 0;
            d = d2 - d1;
        }
        else
        {
            carry = -1;
            d = base + d2 - d1;
        }

        result += d * power;
        power = power * 10;
    }

    return result;
}

int main()
{
    int base, num1, num2;
    cin>>base>>num1>>num2;
    cout<<subtract(base, num1, num2);
}