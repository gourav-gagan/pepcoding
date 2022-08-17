#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    stack<int> st;
    int res[n];

    for (int i=n-1; i>=0; i--){
        while (!st.empty()){
            if (st.top()<arr[i])
                st.pop();
            else {
                res[i]=st.top();
                st.push(arr[i]);
                break;
            }
        }
        if (st.empty()){
            res[i]=-1;
            st.push(arr[i]);
        }
    }

    for (int i=0; i<n; i++){
        cout<<"Next greater for "<<arr[i]<<" is "<<res[i]<<endl;
    }

    return 0;
}