// Rotate_array.cpp
// LeetCode Problem 189: Rotate Array
// This code rotates an array to the right by k steps.
// Example: Input: [1,2,3,4,5,6,7] and k = 3
// Output: [5,6,7,1,2,3,4]
//explaination: We create a new array and place the last k elements at the beginning, followed by the rest of the elements.
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>result(n);
        for(int i=0;i<k;i++){
            result[i]=nums[n-k+i];
        }
        for(int i=0;i<n-k;i++){    
            result[i+k]=nums[i];
        }
        nums=result;
        for(int i=.0;i<n;i++){
            cout<<nums[i]<<" ";
        }
    }
};
int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    obj.rotate(nums, k);
    return 0;
}