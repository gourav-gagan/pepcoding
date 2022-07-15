//https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/any-base-multiplication-official/ojquestion
#include <iostream>
using namespace std;

int getProductFromSingleDigit(int b, int n1, int d2)
{
    int result = 0;
    int c = 0;
    int power = 1;
    while(n1 > 0 || c > 0)
    {
        int d1 = n1 % 10;
        n1 = n1 / 10;

        int d = d1 * d2 + c;
        c = d / b;
        d = d % b;

        result += d*power;
        power = power * 10;
    }
    return result;
}


int add(int base, int num1, int num2)
{
    int result = 0;
    int carry = 0;
    int power = 1;
    
    while (1)
    {
        int r1, r2;

        r1 = num1 % 10;
        r2 = num2 % 10;

        int sd = r1 + r2 + carry;

        if (sd >= base) {
            carry = sd / base;
            sd = sd % base;
        }
        else {
            carry = 0;
        }

        result += sd*power;
        power = power * 10;

        num1 = num1 / 10;
        num2 = num2 / 10;
        if (num1==0 && num2==0 && carry==0)
            break;
    }

    return result;
}

int baseMultiplication(int b, int n1, int n2)
{
    int result = 0;

    int power = 1;
    while (n2 > 0)
    {
        int d2 = n2 % 10;
        n2 = n2 /10;

        int d = getProductFromSingleDigit(b, n1, d2);
        result = add(b, result, d*power);
        power = power * 10;
    }
    return result;
}

int main()
{
    int b, num1, num2;
    cin>>b>>num1>>num2;

    cout<<baseMultiplication(b, num1, num2);
}