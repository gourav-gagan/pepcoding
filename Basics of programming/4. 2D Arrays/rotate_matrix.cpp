#include <iostream>
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

    //rotate : first transpose then reverse column
    //step1: transpose usimg constant space (triangle method)
    for (int i=0 ; i<n; i++)
    {
        for (int j=0; j<i; j++)
        {
            swap(mat[i][j],mat[j][i]);
        }
    }
    //reverse 
    //step2: reverse column, row by row
    for (int i=0; i<n; i++)
    {
        int li=0;
        int ri=n-1;
        while (li<=ri)
        {
            swap(mat[i][li],mat[i][ri]);
            li++;
            ri--;
        }

    }

    //display
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}