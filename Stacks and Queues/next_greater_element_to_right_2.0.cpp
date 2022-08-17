#include <bits/stdc++.h>
using namespace std;
void display(vector<int>a) {
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << endl;
  }
}
vector<int> solve(vector<int>arr)
{
    stack<int> st;
    vector<int> res(arr.size());

    for (int i=arr.size()-1; i>=0; i--){
        while (!st.empty()){
            if (st.top()<arr[i]){
                st.pop();
            }
            else{
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

    return res;
    
}
int main(int argc, char** argv)
{
  int n;
  cin >> n;
  vector<int>arr(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<int>nge(n, 0);
  nge = solve(arr);
  display(nge);
  return 0;
}