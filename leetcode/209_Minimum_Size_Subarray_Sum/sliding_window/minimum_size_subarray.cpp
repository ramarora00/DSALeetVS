// 209. Minimum Size Subarray Sum
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

 

// Example 1:

// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2
// Explanation: The subarray [4,3] has the minimal length under the problem constraint.
// Example 2:

// Input: target = 4, nums = [1,4,4]
// Output: 1
// Example 3:

// Input: target = 11, nums = [1,1,1,1,1,1,1,1]
// Output: 0
//explaination : we will use sliding window approach
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
    public:
    int minArray(vector<int>& nums, int target){
        int n=nums.size();
        int minLength=INT_MAX;
        int left=0;
        int sum=0;
        for(int right=0;right<n;right++){
            sum=sum+nums[right];
            while(sum>=target){
                sum=sum-nums[left];
                minLength=min(minLength,right-left+1);
                left++;
            }
        }
        if(minLength==INT_MAX){
            return 0;
        }
        return minLength;
    }
};
int main(){
    Solution obj;
    vector<int> nums={1,4,4};
    int target=4;
    cout<<obj.minArray(nums,target);
    return 0;
}