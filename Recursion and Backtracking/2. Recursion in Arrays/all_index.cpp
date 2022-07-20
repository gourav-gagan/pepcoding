//https://www.pepcoding.com/resources/online-java-foundation/recursion-in-arrays/all-indices-official/ojquestion
#include <iostream>
#include <vector>
using namespace std;

static vector<int> index;

vector<int> allIndex(vector<int>& arr, int idx, int data, int count)
{
    if (idx == arr.size()){
        return index;
    }//exit condition

    if (arr[idx]==data){
      index.push_back(idx);
      index = allIndex(arr, idx+1, data, count);
      return index;
    }
    else{
      index = allIndex(arr, idx+1, data, count);
      return index;
    }
}

int main() {
  int n ;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;
    arr.push_back(d);
  }
  int data;
  cin >> data;
  vector<int> ans = allIndex(arr, 0, data, 0);
  if (ans.size() == 0) {
    cout << endl;
    return 0;
  }
  for (int ele : ans) cout << ele << endl;

  return 0;
}