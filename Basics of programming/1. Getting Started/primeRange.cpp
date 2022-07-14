#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    int isPrime[high];
    
    for (int i=0; i<=high; i++)
        isPrime[i]=i;
    isPrime[0]=isPrime[1]=-1;
    
    for (int i=2; i*i<=high; i++)
    {
        if (isPrime[i])
            for (int j=i*i; j<=high; j=j+i)
                isPrime[j]=-1;
    }
    
    for (int i=low; i<=high; i++)
    {
        if (isPrime[i]!=-1)
            cout<<isPrime[i]<<endl;
    }
}