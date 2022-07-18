//https://www.pepcoding.com/resources/online-java-foundation/string,-string-builder-and-arraylist/toggle-case-official/ojquestion
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    for (int i=0; i<n; i++)
    {
        if (islower(s[i]))
            s[i]=toupper(s[i]);
        else
            s[i]=tolower(s[i]);
    }
    cout<<s;
}