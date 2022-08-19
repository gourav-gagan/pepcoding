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
    int n=arr.size();
    vector<int> res(n);

    // [2 5 9 3 1 12 6 8 7]

    //pop
    //check
    //push

    for (int i=0; i<n; i++){

        //pop until greater element found or stack becomes empty
        while(st.size()>0 && arr[i]>arr[st.top()]){
            st.pop();
        }

        //get result
        if (st.empty()){
            res[i]=i+1;
        } else {
            res[i]=i-st.top();
        }

        //push
        st.push(i);
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
  vector<int>span(n, 0);
  span = solve(arr);
  display(span);
  return 0;
}