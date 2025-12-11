//if array is sorted 

#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution{
public:
    int oddFreqSum(vector<int>& arr){
        sort(arr.begin(), arr.end()); 
        int n = arr.size();
        int count = 1; 
        int sum = 0;

        
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                count++; 
            } else {
               
                if (count % 2 != 0) {
                    sum += arr[i - 1];
                }
                count = 1; 
            }
        }

        if (count % 2 != 0) {
            sum += arr[n - 1];
        }

        return sum;
    }
};

int main(){
    Solution obj;
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4};
    int result = obj.oddFreqSum(arr);
    cout << result << endl; 
    return 0;
}
