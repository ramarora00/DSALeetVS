// //922. Sort Array By Parity II
// Given an array of integers nums, half of the integers in nums are odd, and the other half are even.
// Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.
// Return any answer array that satisfies this condition.
// Example 1:
// Input: nums = [4,2,5,7]
// Output: [4,5,2,7]
// Explanation: [4,7,2,5], [2,5,4,7], [2,7,4,5] would also have been accepted.
// Example 2:
// Input: nums = [2,3]
// Output: [2,3]
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int even=0;
        int odd=1;
        while(even<n && odd < n){
            if(nums[even] %2 ==0){
                even=even+2;
            }
            else if(nums[odd]%2!=0){
                odd=odd+2;
            }
            else{
                int temp=nums[even];
                nums[even]=nums[odd];
                nums[odd]=temp;

            }
        }
        return nums;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {4, 2, 5, 7};
    vector<int> result = obj.sortArrayByParityII(nums);
    
    // Print the result
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}