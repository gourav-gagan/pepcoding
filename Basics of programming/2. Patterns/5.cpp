/*  n=5                 (space,star)
            *               2   1
        *   *   *           1   3
    *   *   *   *   *       0   5
        *   *   *           1   3
            *               2   1

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int star=1;
    int space=n/2;

    for (int i=1; i<=n; i++)
    {
        for (int i=1; i<=space; i++)
            cout<<"\t";

        for (int i=1; i<=star; i++)
            cout<<"*\t";

        if (i<=n/2)
        {
            space--;
            star+=2;
        }
        else
        {
            space++;
            star-=2;
        }

        cout<<endl;
    }
}