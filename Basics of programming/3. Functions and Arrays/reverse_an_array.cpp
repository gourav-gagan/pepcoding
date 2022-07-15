#include<iostream>
using namespace std;

void reverse(int* arr, int n){
    int temp;
    int start = 0;
    int end = n - 1;
    while (start<n/2)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    display(arr,n);
}