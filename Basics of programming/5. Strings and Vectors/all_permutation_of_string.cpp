//https://www.pepcoding.com/resources/online-java-foundation/string,-string-builder-and-arraylist/print-all-permutations-of-a-string-iteratively-official/ojquestion
#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n==0)
        return 1;
    return (n*factorial(n-1));
}

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int f=factorial(n);
    for (int i=0; i<f; i++)
    {
        
    }
    
}