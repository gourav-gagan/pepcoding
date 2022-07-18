//https://www.pepcoding.com/resources/online-java-foundation/string,-string-builder-and-arraylist/string-compression-official/ojquestion
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int dup=1;
    string s1;
    string s2;
    for (int i=0; i<n; i++)
    {
        if (dup==1)
        {
            s1.push_back(s[i]);
            s2.push_back(s[i]);
        }
        if (s[i] == s[i+1])
        {
            dup++;
        }
        else
        {
            if (dup>1)
            {
                s2 = s2 + to_string(dup);
            }
            dup=1;
        }
    }
    cout<<s1<<endl<<s2;
}