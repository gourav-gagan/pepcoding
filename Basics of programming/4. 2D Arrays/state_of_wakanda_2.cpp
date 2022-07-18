//https://www.pepcoding.com/resources/online-java-foundation/2d-arrays/diagonal-traversal-official/ojquestion
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //input
    int n;
    cin>>n;
    int mat[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin>>mat[i][j];
        }
    }

    //diagonal traversal
    for (int g=0; g<n; g++) //g is diagonal no.
    {
        int i=0;
        int j=g;
        while (j<n)
        {
            cout<<mat[i][j]<<endl;
            i++;
            j++;
        }
    }
    
}