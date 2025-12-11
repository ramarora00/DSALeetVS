#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> RearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n); 
        int pos = 0;  
        int neg = 1;  
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                ans[pos] = nums[i];
                pos += 2;  
            } else {
                ans[neg] = nums[i];
                neg += 2;  
            }    
        }

        return ans; 
    }
};

int main() {
    Solution obj;
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = obj.RearrangeArray(nums);
    
    // Print the result
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
