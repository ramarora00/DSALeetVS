//Arrange Elements by Uniqueness and Frequency Indexing
//AMCAT pranav question 
//Input:
//6
//1 2 2 3 4 4
//Output:
//1 3 2 4
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    unordered_map<int,int> freq;

    for(int x : a) freq[x]++;

    // Result array with -1 as empty slot
    vector<int> res(n, -1);

    // Step 1: Place uniques at start
    int idx = 0;
    for(int x : a) {
        if(freq[x] == 1) {
            res[idx++] = x;
        }
    }

    // Step 2: Place duplicates based on freq
    for(auto &p : freq) {
        int element = p.first;
        int f = p.second;

        if(f > 1) {
            int pos = f; // index = frequency

            // If filled, move to next empty
            while(pos < n && res[pos] != -1) pos++;

            if(pos < n) res[pos] = element;
        }
    }

    // Print final array ignoring empty (-1)
    for(int x : res) {
        if(x != -1) cout << x << " ";
    }

    return 0;
}