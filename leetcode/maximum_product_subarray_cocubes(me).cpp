//maximum product subaarray
//input : nums=[2,3,-2,4]
//output : 6
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(nums.empty()) return 0;
        int maxproduct=nums[0];
        int product=nums[0];
        int minproduct=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(maxproduct,minproduct);
            }
            maxproduct=max(nums[i],maxproduct*nums[i]);
            minproduct=min(nums[i],minproduct*nums[i]);
            product=max(product,maxproduct);
        }
        return product;
    }
};