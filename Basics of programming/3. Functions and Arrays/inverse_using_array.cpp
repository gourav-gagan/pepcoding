//https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/inverse-of-an-array-official/ojquestion
#include<iostream>
using namespace std;

int* inverse(int* arr, int n){
    
    int temp[n];
    for (int i = 0; i<n; i++)
    {
        temp[arr[i]] = i;
    }

    for (int i = 0; i<n; i++)
    {
        arr[i] = temp[i];
    }

    return arr;
    
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<endl;
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
    
    int* inv = inverse(arr,n);
    display(inv,n);
    
}