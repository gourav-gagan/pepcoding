#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cin>>num1>>num2;

    //GCD
    for (int i=min(num2,num1); i>=2; i--)
    {
        if ((num1 % i == 0)&&(num2 % i == 0))
        {
            cout<<i<<endl;
            break;
        }
    }

    //LCM
    int i=1;
    int mx = max(num1, num2);
    int mn = min(num1, num2);
    while (1)
    {
        if ((mx*i)%mn == 0)
        {
            cout<<mx*i<<endl;
            break;
        }
        i++;
    }
}