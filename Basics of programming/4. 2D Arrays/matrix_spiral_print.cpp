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

    //print
    int t = 0;
    int b = n-1;
    int r = m-1;
    int l = 0;

    int tn=m*n;
    int c=0;
    while(c < tn){
        for(int i=t, j=l; i<=b && c < tn; i++){
            cout<< mat[i][j]<< endl;
            c++;
        }
        l++;
        for(int i=b, j=l; j<=r && c < tn; j++){
            cout<< mat[i][j] << endl;
            c++;
        }
        b--;
        for(int i=b, j=r; i>=t && c < tn; i--){
            cout << mat[i][j] << endl;
            c++;
        }
        r--;
        for(int i=t, j=r; j>=l && c < tn; j--){
            cout << mat[i][j] << endl;
            c++;
        }
        t++;
    }


}