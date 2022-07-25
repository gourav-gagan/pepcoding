//https://www.pepcoding.com/resources/online-java-foundation/recursion-on-the-way-up/print-kpc-official/ojquestion

#include <iostream>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string asf){

    //base
    if (ques.size() == 0)
    {
        cout<<asf<<endl;
        return;
    }
    
    //split ques=s1+s2
    char s1 = ques[0];
    string s2 = ques.substr(1);

    //find code for s1
    string s1_code=codes[s1-'0'];

    //loop of every values in s1_code
    for (int i=0; i<s1_code.size(); i++)
    {
        //recursion call for s2, asf+s1_code[i]
        printKPC(s2, asf+s1_code[i]);
    }
}

int main(){
    string str;
    cin >> str;
    printKPC(str, "");
}