// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

 

// Example 1:

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
// Example 2:

// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9
// Example 3:

// Input: nums = [1,0,1,2]
// Output: 3
#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>  

using namespace std;

class Solution {
public:
    int longestCons(vector<int>& nums) {
        int n = nums.size();  
        unordered_set<int> numSet;

        for(int num : nums) {
            numSet.insert(num);
        }

        int longest = 0;

        for(int num : nums) {
            if (numSet.count(num - 1) == 0) {
                int currentNum = num;
                int longestStreak = 1;

                while (numSet.count(currentNum + 1)) {
                    currentNum++;
                    longestStreak++;
                }

                longest = max(longest, longestStreak);
            }
        }

        return longest;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << obj.longestCons(nums) << endl;  
    return 0;
}
