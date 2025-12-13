#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int>window;
        int n=nums.size();
        vector<int>copy;
        for(int i=0;i<n;i++){
            if(window.count(nums[i])){
                copy.push_back(nums[i]);
            }
            else{
                window.insert(nums[i]);
            }
        }
        return copy;
    }
};
int main(){
    Solution sol;
    vector<int>nums={4,3,2,7,8,2,3,1};
    vector<int>res=sol.findDuplicates(nums);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}