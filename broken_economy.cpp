//https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/ceil-floor-official/ojquestion
//linear time (unoptimized)
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    
    for (int i=0; i<n; i++)
    {
        if (arr[i]==data)
        {
            cout<<data;
            break;
        }
        if (arr[i]>data)
        {
            cout<<arr[i]<<endl<<arr[i-1];
            break;
        }
    }
    
}