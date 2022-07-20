//https://www.pepcoding.com/resources/online-java-foundation/introduction-to-recursion/toh-official/ojquestion
//General print
#include<iostream>
using namespace std;


void toh(int n, char A, char B, char C){

    if (n==0){
        return;
    }

    toh(n-1, A, C, B); //move n-1 disks from A to C using B
    cout<<"move "<<n<<" from "<<A<<" to "<<B<<endl; //print acc to problem
    toh(n-1, C, B, A); //move n-1 disks from C to B using A
}



int main(){
    int n; cin>>n;
    char t1, t2, t3; //tower ids
    cin>>t1>>t2>>t3;
    toh(n,t1,t2,t3);
}