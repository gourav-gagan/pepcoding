#include <iostream>
using namespace std;

void fibonacciPrint(int n)
{
    int a, b, c;
    a = 0;
    b = 1;
    for (int i=0; i<n; i++)
    {
        c = a+b;
        cout<<a<<"\n";
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    cin>>n;
    fibonacciPrint(n);
}