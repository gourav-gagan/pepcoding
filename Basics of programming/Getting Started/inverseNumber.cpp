//https://www.pepcoding.com/resources/online-java-foundation/getting-started/inverse-of-a-number-official/ojquestion   
#include <iostream>
#include <math.h>
using namespace std;

void inverse(int n)
{
    int digit;
    int pos=1;
    int inv=0;;

    while(n>0)
    {
        digit = n%10;
        n = n/10;

        inv = inv + pos*pow(10, digit-1);

        pos++;
    }

    cout<<inv;
    
}

int main()
{
    int n;
    cin>>n;
    inverse(n);
}