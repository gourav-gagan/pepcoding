#include <bits/stdc++.h>

using namespace std;

int main()
{
    //input
    string s1;
    cin >> s1; //space terminated
    //getline(cin >> ws, s2); line terminated
    cout<<s1<<endl;
    
    //substr
    // string_name.substr(starting_pos, no_of_letters_to_include_after_pos)
    cout<<s1.substr(0, 1)<<endl<<endl;

    //print all substr
    for (int i=0; i<s1.length(); i++)
    {
        for (int j=1; j<=s1.length()-i; j++)
        {
            cout<<s1.substr(i, j)<<" ";
        }
    }
    cout<<endl;

    //adding strings
    string s2;
    cin>>s2;
    cout<< s1+s2 <<endl<<endl;

    //splitting string using getline and stringsteam
    string s3;
    getline(cin >> ws,s3);
    vector<string> tokens;
    string token;
    stringstream ss(s3);
    while (getline(ss, token, ',')) //comma is the delimiter
        tokens.push_back(token);
    for (auto &s : tokens)
    {
        cout<<s<<endl;
    }

}