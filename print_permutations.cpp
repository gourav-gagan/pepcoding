#include <iostream>
using namespace std;

void printPermutations(string str, string asf){

    if (str.length()==0)
    {
        cout<<asf<<endl;
        return;
    }

    for (int i=0; i<str.size(); i++)
    {
        char ch = str[0];
        string s1=str.substr(0,i);
        string s2=str.substr(i+1);
        string s=s1+s2;
        printPermutations(s, asf + ch);
    }

}

int main(){
    string str;
    cin>>str;
    printPermutations(str,"");
    
}