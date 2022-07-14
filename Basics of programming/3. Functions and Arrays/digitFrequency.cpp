//https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/digit-frequency-official/ojquestion
#include <iostream>
using namespace std;

int digitFrequency(int n, int d)
{
    int count;
    while (n>0)
    {
        if (n%10 == d)
            count++;
        n = n/10;
    }
    return count;
}

int main()
{
    int n, d;
    cin>>n>>d;
    cout<<digitFrequency(n,d);
}