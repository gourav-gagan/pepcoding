//https://www.pepcoding.com/resources/online-java-foundation/string,-string-builder-and-arraylist/print-all-palindromic-substrings-official/ojquestion
#include <bits/stdc++.h>
using namespace std;

//check palidrome
bool palindrome(string s)
{
    int n = s.length();
    for (int i=0; i<n/2; i++)
        if (s[i]!=s[n-i-1])
            return false;
    return true;
}

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    for (int i=0; i<n; i++)
    {
        for (int j=1; j<=n-i; j++)
        {
            if (palindrome(s.substr(i,j)))
            {
                cout<<s.substr(i,j)<<endl;
            }
        }
    }
}