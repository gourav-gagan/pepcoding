#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;

    long long ans=x;
    long long rev=0;
    while(x>0){
        rev=rev*10+x%10;
        cout<<rev<<" ";
        x=x/10;
    }
    if(rev==ans){
        cout<<endl<<true;
    }
    else{
        cout<<endl<<false;
    }
}