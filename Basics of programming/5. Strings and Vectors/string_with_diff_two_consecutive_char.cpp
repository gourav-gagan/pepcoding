//https://www.pepcoding.com/resources/online-java-foundation/string,-string-builder-and-arraylist/string-with-difference-of-every-two-consecutive-characters-official/ojquestion
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    string res;
    res.push_back(s[0]);
    for (int i=1; i<n; i++)
    {
        int diff = s[i]-s[i-1];
        res = res + to_string(diff);
        res.push_back(s[i]);
    }
        
    cout<<res;
}