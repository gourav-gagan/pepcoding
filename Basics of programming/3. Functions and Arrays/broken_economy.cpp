//https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/ceil-floor-official/ojquestion
//using binary search
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

    int low=0;
    int high=n-1;
    int mid;
    while (low<=high)
    {
        mid = (low + high)/2;
        if (data == arr[mid])
        {
            cout<<arr[mid];
            return 0;
        }
        if (data < arr[mid])
        {
            high = mid -1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout<<arr[low]<<endl<<arr[high];
    return 0;
}