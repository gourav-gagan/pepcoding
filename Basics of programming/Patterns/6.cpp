/*  n=5                             (star,space,star)

    *   *   *       *   *   *          3    1   3
    *   *               *   *          2    3   2
    *                       *          1    5   1
    *   *               *   *          2    3   2
    *   *   *       *   *   *          3    1   2

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int star = n/2 + 1;
    int space = 1;

    for (int i=1; i<=n; i++)
    {
        for (int i=1; i<=star; i++) cout<<"*\t";
        for (int i=1; i<=space; i++) cout<<"\t";
        for (int i=1; i<=star; i++) cout<<"*\t";

        if (i<=n/2)
        {
            star--;
            space+=2;
        }
        else
        {
            star++;
            space-=2;
        }
        cout<<endl;
    }
}