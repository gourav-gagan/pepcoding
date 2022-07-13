//https://www.pepcoding.com/resources/online-java-foundation/getting-started/pythagorean_triplet/topic

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    //check max number;
    int max = a;
    if (b >= max)
        max = b;
    if (c >= max)
        max = c;
    
    //check pythagorean triplet
    if (max == a)
        cout << ((b+c)*(b+c) == a*a);
    else if (max == b)
        cout << ((a+c)*(a+c) == b*b);
    else
        cout << ((a+b)*(a+b) == c*c);
}