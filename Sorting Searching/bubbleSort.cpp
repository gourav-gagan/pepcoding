#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> v){
    for (auto x: v){
        cout<<x<<endl;
    }
}

void bubbleSort(vector <int> &nums){
    for (int pass=0; pass<nums.size()-1; pass++){
        for (int i=0; i<nums.size()-1-pass; i++){
            if (nums[i]>nums[i+1]){
                swap(nums[i], nums[i+1]);
            }
        }
    }
    display(nums);
}

int main(){
    int n;
    cin>>n;

    //vector input
    vector <int> nums(n);
    for (int i=0; i<n; i++){
        cin>>nums[i];
    }

    bubbleSort(nums);
}