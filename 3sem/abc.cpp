Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint
int maxlen=INT_MAX;
int left=0;
int sum=0;
for(int right=0;right<nums.size()){
    sum+=nums[right];
    while(sum>=target){
        maxlen=min(maxlen,right-left+1);
        sum-=nums[left];
        left++;
    }
}