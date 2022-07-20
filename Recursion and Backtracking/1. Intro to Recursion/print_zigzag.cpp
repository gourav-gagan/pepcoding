//https://www.pepcoding.com/resources/online-java-foundation/introduction-to-recursion/print-zig-zag-official/ojquestion

// Input1 -> 1
// Output1 -> 1 1 1

// Input2 -> 2
// Output2 -> 2 1 1 1 2 1 1 1 2

// Input2 -> 3
// Output3 -> 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3

#include<iostream>
using namespace std;


void pzz(int n){

    if (n==0){
        return;
    }

    cout<<n<<" ";        //pre
    pzz(n-1);       //left call
    cout<<n<<" ";        //In
    pzz(n-1);       //right call
    cout<<n<<" ";        //post
}



int main(){
    int n; cin>>n;
    pzz(n);
}
