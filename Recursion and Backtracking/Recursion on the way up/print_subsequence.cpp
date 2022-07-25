//https://www.pepcoding.com/resources/online-java-foundation/recursion-on-the-way-up/print-subsequence-official/ojquestion
//space optimized

#include <iostream>
using namespace std;

void printSS(string ques, string ans){

    if (ques.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }
    
    //split string
    char s1 = ques[0];
    string s2 = ques.substr(1);

    printSS(s2, ans+s1);
    printSS(s2, ans+"");
    
}

int main(){
    string str;
    cin >> str;
    printSS(str, "");
}