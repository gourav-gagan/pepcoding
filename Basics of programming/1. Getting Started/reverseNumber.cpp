#include <iostream>
#include <vector>
using namespace std;

void countDigits(int n)
{
    vector <int> digits;
    while(n>0)
    {
        digits.push_back(n%10);
        n=n/10;
    }

    for (int it : digits)
    {
        cout<<it<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    countDigits(n);
}