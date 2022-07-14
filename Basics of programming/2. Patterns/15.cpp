//          1	               
//      2	3	2	                  
// 3    4	5	4	3	              
//      2	3	2	                  
//          1	                      

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int space=n/2;
    int star=1;
    int val=1;

    for (int i = 1; i<=n; i++)
    {
        for (int j=1; j<=space; j++)    cout<<"\t";
        {
            int cval = val;
            for (int j=1; j<=star; j++)
            {
                if (j<=star/2)
                {
                    cout<<cval++<<"\t";
                }
                else
                {
                    cout<<cval--<<"\t";
                }
            }
        }

        if (i<=n/2)
        {
            space--;
            star=star+2;
            val++;
        }
        else
        {
            space++;
            star=star-2;
            val--;
        }

        cout<<endl;

    }

}