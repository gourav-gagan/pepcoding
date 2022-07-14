//https://www.pepcoding.com/resources/online-java-foundation/getting-started/rotate-a-number-official/ojquestion
#include <iostream>
using namespace std;

void inverse(int n, int r)
{
    int temp = n;
    int result;

    //for number of digits
    int size = 0;
    while(temp>0)
    {
        temp = temp/10;
        size++;
    }

    r = r % size;
    if (r<0)
        r = r + size;

    //to find mult and div
    int div = 1;
    int mult = 1;
    for (int i = 0; i<size; i++)
    {
        if (i<r)
            div = div * 10;
        else
            mult = mult * 10;
    }

    int x = n % div;
    int y = n / div;

    result = x * mult + y;

    cout<<result;
    
}

int main()
{
    int n,r;
    cin>>n>>r;
    inverse(n,r);
}