#include <iostream>
using namespace std;

int main()
{
    //define matrix row and columns
    int n, m;
    cin>>n>>m;

    //input matrix
    int mat[n][m];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin>>mat[i][j];
        }
    }

    //exit point of matrix
    int i=0;
    int j=0;
    int dir=0; // 0 for east, 1 for south, 2 for west, 3 for north
    while (true)
    {
        dir = (dir + mat[i][j])%4; //increase direction if 1 by adding 1
        if (dir==0) //for east direction, column++, row is same
            j++;
        else if (dir == 1)  //for south dirction, row same, column++
            i++;
        else if (dir==2) //for west, row is same, column--
            j--;
        else    //north, column same, row--
            i--;
        
        //exit conditions
        if (i==n)
        {
            i--;
            break;
        }
        else if (j==m)
        {
            j--;
            break;
        }
        else if (i == -1)
        {
            i++;
            break;
        }
        else if (j == -1)
        {
            j++;
            break;
        }
    }
    cout<<i<<endl<<j;
}