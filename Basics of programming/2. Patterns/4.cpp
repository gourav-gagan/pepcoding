#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int star=n;
    int space=0;

    for (int i=1; i<=n; i++)
    {
        for (int i=1; i<=space; i++)
        {
            cout<<"\t";
        }
        
        for (int i=1; i<=star; i++)
        {
            cout<<"*\t";
        }

        star--;
        space++;
        cout<<endl;
    }
}