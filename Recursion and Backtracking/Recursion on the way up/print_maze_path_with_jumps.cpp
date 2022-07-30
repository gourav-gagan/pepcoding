#include<iostream>
using namespace std;


    void printMazePaths(int sr, int sc, int dr, int dc, string psf) {

        //base
        if (sr==dr && sc==dc)
        {
            cout<<psf<<endl;
            return;
        }

        //move size loop

        //horizontal
        for (int ms=1; ms<=dc-sc; ms++)
        {
            printMazePaths(sr, sc+ms, dr, dc, psf+"h"+char(ms+'0'));
        }

        //vertical
        for (int ms=1; ms<=dr-sr; ms++)
        {
            printMazePaths(sr+ms, sc, dr, dc, psf+"v"+char(ms+'0'));
        }

        //diagonal
        for (int ms=1; ms<=dr-sr && dc-sc; ms++)
        {
            printMazePaths(sr+ms, sc+ms, dr, dc, psf+"d"+char(ms+'0'));
        }
        
    }

int main() {
        int n ;
        int m ;cin>>n>>m;
        printMazePaths(0, 0, n - 1, m - 1, "");
    }