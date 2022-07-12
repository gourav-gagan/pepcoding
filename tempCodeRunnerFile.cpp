#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count=0;
        
    for (int num=2; num<n; num++)
    {
        cout<<num<< " ";
        for (int i=2; i*i<=num; i++)
        {
            if (num%i==0)
                break;
        }
        cout<<count<< endl;
        count++;
    }
    
    cout<<endl<<count<<endl;
}