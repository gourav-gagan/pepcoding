//https://www.pepcoding.com/resources/online-java-foundation/recursion-in-arrays/max-of-an-array-official/ojquestion
#include <iostream>
using namespace std;

int max(int arr[], int idx, int n){
    
    //exit condition
    if (idx == n-1){
        return arr[idx]; 
    }

    int expMax = max(arr,idx+1,n); //expected maximum

    if (arr[idx] > expMax){
        return arr[idx];
    }
    else{
        return expMax;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
