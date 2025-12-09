//AMCAT my question (1);
//Input: arr = [3,2,0,1]
//Output: [2,3,1,0]
#include <iostream>
#include <vector>
using namespace std;

vector<int> replaceWithIndex(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n);  // Initialize result vector of the same size as arr
    for (int i = 0; i < n; ++i) {
        result[arr[i]] = i;  // Place index in corresponding position
    }
    return result;
}

int main() {
    // Example 1
    vector<int> arr1 = {3, 2, 0, 1};
    vector<int> result1 = replaceWithIndex(arr1);
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;  // Output: 2 3 1 0

    // Example 2
    vector<int> arr2 = {4, 3, 0, 5, 1, 2};
    vector<int> result2 = replaceWithIndex(arr2);
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;  // Output: 2 4 5 1 0 3
    return 0;
}