#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> get_maze_paths(int sr, int sc, int dr, int dc) {

    vector<string> paths;

    //base case
    if (sr==dr && sc==dc)
    {
        vector<string> base;
        base={""};
        return base;
    }
    else if (sr>dr || sc>dc)
    {
        vector<string> base;
        base={};
        return base;
    }

    //horizontal
    vector<string> hpaths;
    for (int move = 1; move<=dc-sc; move++)
    {
        hpaths = get_maze_paths(sr, sc+move, dr, dc);
        for (auto path : hpaths)
        {
            paths.push_back("h"+to_string(move)+path);
        }
    }

    //vertical
    vector<string> vpaths;
    for (int move = 1; move<=dr-sr; move++)
    {
        vpaths = get_maze_paths(sr+move, sc, dr, dc);
        for (auto path : vpaths)
        {
            paths.push_back("v"+to_string(move)+path);
        }
    }

    
    //diagonal
    vector<string> dpaths;
    for (int move = 1; move<=dc-sc && dr-sr; move++)
    {
        dpaths = get_maze_paths(sr+move, sc+move, dr, dc);
        for (auto path : dpaths)
        {
            paths.push_back("d"+to_string(move)+path);
        }
    }

    return paths;

}

void display(vector<string>& arr) {
  cout << "[";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
    if (i < arr.size() - 1) cout << ", ";
  }

  cout << "]" << endl;
}


int main() {
  int n, m;
  cin >> n >> m;
  vector<string> ans = get_maze_paths(0, 0, n - 1, m - 1);
  display(ans);

  return 0;
}