#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> v){
    for (auto x: v){
        cout<<x<<" ";
    }
}

//using max
void selectionSort(vector <int> &nums){
    int max;
    for (int i=0; i<nums.size(); i++){
        max=0;
        for (int j=0; j<nums.size()-i; j++){
            if (nums[j]>nums[max]){
                swap(nums[j], nums[max]);
            }
        }
        swap(nums[max], nums[nums.size()-i-1]);
    }
    display(nums);
}

//using min
void selectionSort_MIN(vector <int> &nums){
    int min;
    for (int i=0; i<nums.size(); i++){
        min=i;
        for (int j=i+1; j<nums.size(); j++){
            if (nums[j]<nums[min]){
                swap(nums[j], nums[min]);
            }
        }
        swap(nums[min], nums[i]);
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

    selectionSort(nums);
}