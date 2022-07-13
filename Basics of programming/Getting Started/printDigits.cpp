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

    int size=digits.size();
    for (int i=size-1; i>=0; i--)
    {
        cout<<digits[i]<<"\n";
    }
}

int main()
{
    int n;
    cin>>n;
    countDigits(n);
}