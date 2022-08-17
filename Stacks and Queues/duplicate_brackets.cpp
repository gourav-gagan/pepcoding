#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string exp;
    //cin>>exp; //cant cin because it ignores space
    getline(cin, exp);

    //create a stack
    //push if open bracket
    //push if character
    //if closed bracked in expression, check if stack top is open bracket print true
    //elsepop until open bracket in stack

    stack <char> st;
    for (int i=0; i<exp.length(); i++){
        if (exp[i]=='('){
            st.push(exp[i]);
        }
        else if (exp[i]==')'){
            if (st.top()=='('){
                cout<<"true";
                return 0;
            }
            else {
                while (st.top()!='('){
                    st.pop();
                }
                st.pop();
            }
        }
        else if (exp[i]!=' ') {
            st.push(exp[i]);
        }
    }
    cout<<"false";
    return 0;
}