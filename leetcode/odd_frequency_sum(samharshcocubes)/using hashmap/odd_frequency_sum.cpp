//given the vetcor of integers having duplicates find of frequency and add that numbers which have odd frequency
//Input: arr = [1,2,2,3,4,4,4]
//Output: 8
//using hashmap
//array is not sorted/ works for unsorted array also
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution{
    public:
    int oddFreqSum(vector<int>& arr){
        unordered_map<int,int> freq;
        for(int x:arr){
            freq[x]++;
        }
        int sum=0;
        for(const auto& p:freq){
            if(p.second%2!=0){
                sum+=p.first;
            }
        }
        return sum;
    }
};
int main(){
    Solution obj;
    vector<int> arr={1,2,2,3,4,4,4};
    int result=obj.oddFreqSum(arr);
    cout<<result<<endl; //Output: 8
    return 0;
}