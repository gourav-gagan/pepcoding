//https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/any-base-addition-official/ojquestion
#include <iostream>
using namespace std;

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

int main()
{
    int base, num1, num2;
    cin>>base>>num1>>num2;
    cout<<add(base, num1, num2);
}