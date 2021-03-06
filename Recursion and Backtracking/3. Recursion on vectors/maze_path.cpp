//https://www.pepcoding.com/resources/online-java-foundation/recursion-with-arraylists/get-maze-paths-official/ojquestion

#include<iostream>
#include<vector>

using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column
vector <string> getMazePaths(int sr, int sc, int dr, int dc) {

    if (sr == dr && sc == dc)
    {
        vector<string> base = {""};
        return base;
    }

    vector<string> hpaths;
    vector<string> vpaths;

    if (sc <= dc)
        hpaths = getMazePaths(sr, sc+1, dr, dc);//horizontal
    if (sr <= dr)
        vpaths = getMazePaths(sr+1, sc, dr, dc);//vertical

    vector <string> paths;
    for (string hpath : hpaths)
    {
        paths.push_back("h"+hpath);
    }
    for (string vpath : vpaths)
    {
        paths.push_back("v"+vpath);
    }

    return paths;
}

void display(vector<string>& arr){
    cout << "[";
    for(int i = 0;i < arr.size();i++){
        cout << arr[i];
        if(i < arr.size() -1) cout << ", ";
    }
    
    cout << "]"<<endl;
}


int main() {
    int n,m; cin >> n >> m;
    vector<string> ans = getMazePaths(0,0,n-1,m-1);
    display(ans);

    return 0;
}