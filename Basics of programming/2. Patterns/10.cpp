//                              outerSpace      innerSpace
//         *	                    2               -1
//     *		*	                1                1
// *				*	            0                3
//     *		*	                1                1
//         *	                    2               -1


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int outerSpace=n/2;
    int innerSpace=-1;

    for(int i=1; i<=n; i++)
    {
        for (int j=1; j<=outerSpace; j++)   cout<<"\t";
        cout<<"*\t";
        for (int j=1; j<=innerSpace; j++)   cout<<"\t";
        if (i>1 && i<n) cout<<"*\t";

        if (i<=n/2)
        {
            outerSpace--;
            innerSpace+=2;
        }
        else
        {
            outerSpace++;
            innerSpace-=2;
        }

        cout<<endl;
    }
}