//https://www.pepcoding.com/resources/online-java-foundation/recursion-with-arraylists/get-kpc-official/ojquestion
#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> getKPC(string s) {

    //define codes vector
    static vector<string> codes = {".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};

    //base case
    if (s.length()==0){
        static vector<string> base = {""}; //base case initialisation
        return base;
    }

    //split
    char s1 = s[0];
    string s2 = s.substr(1);

    //call recursion
    vector<string> rec;
    rec = getKPC(s2);

    //final result
    vector<string> result;

    string codesfors1 = codes[s1-'0'];

    for (int i=0; i<codesfors1.length(); i++)
    {
        char s1code = codesfors1[i];
        for (auto el : rec){
            result.push_back(s1code+el);
        }
    }

    return result;
}


int main() {
  string s;
  cin >> s;
  vector<string> ans = getKPC(s);
  int cnt = 0;

  cout << '[';
  for (string str : ans) {
    if (cnt != ans.size() - 1)
      cout << str << ", ";
    else
      cout << str;
    cnt++;
  }
  cout << ']';
}