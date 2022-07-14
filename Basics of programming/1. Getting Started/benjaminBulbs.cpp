//https://www.pepcoding.com/resources/online-java-foundation/getting-started/benjamin-bulbs-official/ojquestion
//*************
//total factors of perfect squares are always odd
//*
//  36 : (1*36) (2*18) (3*12) (4*9) (6,6)
//       (36*1) (18*2) (12*3) (9*4)

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i=1; i*i<=n; i++)
    {
        cout<<i*i<<"\n";
    }
}