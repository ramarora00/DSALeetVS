// https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>answer;
        unordered_map<int,int>window;
        for(int x:nums1){
            window[x]++;
        }
        for(int y:nums2){
            if(window.find(y) != window.end() && window[y]>0){
                answer.push_back(y);
                window[y]--;
            }
        }
        return answer;
    }
};
int main(){
    Solution obj;
    vector<int> nums1={1,2,2,1};
    vector<int> nums2={2,2};
    vector<int> result=obj.intersect(nums1,nums2);
    for(int x:result){
        cout<<x<<" ";
    }
    return 0;
}