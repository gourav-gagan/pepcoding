#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cin>>num1>>num2;

    int onum1 = num1;
    int onum2 = num2;

    //GCD using division method
    while(num1 % num2 != 0)
    {
        int r;
        r = num1 % num2;
        num1 = num2;
        num2 = r;
    }
    int gcd = num2;
    
    //LCM
    //GCD*LCM = n1*n2;
    int lcm = (onum1*onum2)/gcd;

    cout<<gcd<<endl<<lcm<<endl;
}