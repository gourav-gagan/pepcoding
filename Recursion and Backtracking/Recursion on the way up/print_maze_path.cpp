#include <iostream>
using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string psf){

    if (sr>dr || sc>dc)
    {
        return;
    }

    if (sr==dr && sc==dc)
    {
        cout<<psf<<endl;
        return;
    }

    //horizontal
    printMazePaths(sr, sc+1, dr, dc, psf+"h");

    //vertical
    printMazePaths(sr+1, sc, dr, dc, psf+"v");
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    printMazePaths(0, 0, n - 1, m - 1, "");
}