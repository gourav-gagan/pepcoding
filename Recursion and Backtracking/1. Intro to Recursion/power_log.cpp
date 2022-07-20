#include<iostream>
using namespace std;

int powerLogarithmic(int x,int n){

    if (n==0)
    {
        return 1;
    }

    if (n%2){
        return x*powerLogarithmic(x,n/2)*powerLogarithmic(x,n/2);
    }
    return powerLogarithmic(x,n/2)*powerLogarithmic(x,n/2);
}

int main(){
    int x,n; cin>>x>>n;
    cout<<powerLogarithmic(x,n);
}