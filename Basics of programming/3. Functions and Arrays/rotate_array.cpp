/*
    part1 + part2
    rev(part1) + rev(part2)
    rev( rev(part1) + rev(part2) )
*/

//https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/rotate-an-array-official/ojquestion

#include<iostream>
using namespace std;

void reverse(int* arr, int i, int j)
{
    while (i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void rotate(int* arr, int n, int k){
   
   //special cases when k is not in range of (0 , n);
   k = k % n;
   if (k < 0) k = k + n;

   reverse(arr, 0, n-k-1);
   reverse(arr, n-k, n-1);
   reverse(arr, 0, n-1);
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, r;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cin>>r;
    
    rotate(arr,n,r);
    display(arr,n);
}