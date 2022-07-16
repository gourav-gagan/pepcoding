#include <iostream>
using namespace std;

int main()
{
    int m1, n1;
    cin>>m1>>n1;
    int matrix1[m1][n1];
    for (int i=0; i<m1; i++)
    {
        for (int j=0; j<n1; j++)
        {
            cin>>matrix1[i][j];
        }
    }

    int m2, n2;
    cin>>m2>>n2;
    int matrix2[m2][n2];
    for (int i=0; i<m2; i++)
    {
        for (int j=0; j<n2; j++)
        {
            cin>>matrix2[i][j];
        }
    }

    if (n1!=m2){
        cout<<"Invalid input";
        return 0;
    }
        
    for (int i=0; i<m1; i++)
    {
        for (int j=0; j<n2; j++)
        {
            int sum=0;
            for (int k = 0; k<m2; k++)
            {
                sum = sum + matrix1[i][k]*matrix2[k][j];
            }
            cout<<sum<<" ";
        }
        cout<<"\n";
    }
}