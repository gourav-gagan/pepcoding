//https://www.pepcoding.com/resources/online-java-foundation/recursion-with-arraylists/get-subsequence-official/ojquestion
//subsequence = subset of string
//abc
//[, c, b, bc, a, ac, ab, abc]
#include <iostream>
#include <vector>
using namespace std;

vector<string> gss(string s){

    //base case
    if (s.length()==0){
        vector<string> base;
        base.push_back("");
        return base;
    }

    //split string into two
    char s1 = s[0]; //a
    string s2 = s.substr(1); //bc
    vector <string> ss; //for storing recursive returns

    //recursion
    ss = gss(s2);

    //result vector
    vector <string> result;
    for (string el : ss){
        result.push_back(""+el);
    }
    for (string el : ss){
        result.push_back(s1+el);
    }
    return result;
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}