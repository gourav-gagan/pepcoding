//https://www.pepcoding.com/resources/online-java-foundation/recursion-with-arraylists/get-stair-paths-official/ojquestion
//https://nados.io/question/get-stair-paths
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> get_stair_paths(int n) {

    vector<string> result;

    //base case
    if (n==0)
    {
        vector<string> base;
        base.push_back("");
        return base;
    }


    for (int step=1; step<=3; step++)
    {
        if ((n-step)>=0){//valid steps
            vector<string> rec_ans = get_stair_paths(n-step);//recursion
            char n_step =  char(step+'0');//to get character form of step we took;
            //now we need to add the step to the strings inside rec_anse
            for (int i = 0; i<rec_ans.size(); i++){
                result.push_back(n_step + rec_ans[i]);
            }
        }
    }

    //final answer
    return result;


}

int main() {
  int n;
  cin >> n;
  vector<string> ans = get_stair_paths(n);
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