//https://www.pepcoding.com/resources/online-java-foundation/recursion-in-arrays/display-array-official/ojquestion

#include <iostream>
using namespace std;

void display(int arr[], int idx, int n){
    if (idx<n){
        cout<<arr[idx]<<endl;
        return display(arr, idx+1, n);
    }
    return;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    display(arr, 0, n);
}