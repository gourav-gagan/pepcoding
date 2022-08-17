#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string exp;
    getline(cin, exp);

    //create stack
    //if any open bracket push to stack
    //if a closed bracket
        //if stack empty return false
        //if top bracket same pop
        //if top bracket different return false
    
    stack<char> st;
    for (int i=0;i<exp.length();i++){
        if (exp[i]=='[' || exp[i]=='{' || exp[i]=='(') {
            st.push(exp[i]);
        }

        if (exp[i]==']'){
            if (st.empty()){
                cout<<"false";
                return 0;
            }
            else if (st.top()=='['){
                st.pop();
            }
            else{
                cout<<"false";
                return 0;
            }
        }

        if (exp[i]=='}'){
            if (st.empty()){
                cout<<"false";
                return 0;
            }
            else if (st.top()=='{'){
                st.pop();
            }
            else{
                cout<<"false";
                return 0;
            }
        }

        if (exp[i]==')'){
            if (st.empty()){
                cout<<"false";
                return 0;
            }
            else if (st.top()=='('){
                st.pop();
            }
            else{
                cout<<"false";
                return 0;
            }
        }
    }
    if (st.empty()){
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    return 0;

}