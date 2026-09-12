// Triplets with Smaller Sum
// Solved
// Difficulty: MediumAccuracy: 40.33%Submissions: 134K+Points: 4
// Given an array arr[] of distinct integers and an integer sum, count the number of unique triplets of elements whose sum is strictly less than sum. A triplet is identified only by the three elements it contains, so different permutations of the same three elements are counted as one triplet.

// Examples :

// Input: sum = 2, arr[] = [-2, 0, 1, 3]
// Output:  2
// Explanation: Triplets with sum less than 2 are (-2, 0, 1) and (-2, 0, 3). 
// Input: sum = 12, arr[] = [5, 1, 3, 4, 7]
// Output: 4
// Explanation: Triplets with sum less than 12 are (1, 3, 4), (5, 1, 3), (1, 3, 7) and (5, 1, 4).
// Constraints:

// 1 ≤ sum ≤ 105
// 3 ≤ arr.size() ≤ 103
// -103 ≤ arr[i] ≤ 103


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countTriplets(int sum, vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int count = 0;
        
        for (int i = 0; i < arr.size() - 2; i++) {
            int left = i + 1;
            int right = arr.size() - 1;
            
            while (left < right) {
                int currSum = arr[i] + arr[left] + arr[right];
                
                if (currSum < sum) {
                    count += (right - left);
                    left++;
                } else {
                    right--;
                }
            }
        }
        
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> arr1 = {-2, 0, 1, 3};
    int sum1 = 2;
    cout << sol.countTriplets(sum1, arr1) << endl; 

    vector<int> arr2 = {5, 1, 3, 4, 7};
    int sum2 = 12;
    cout << sol.countTriplets(sum2, arr2) << endl;

    return 0;
}
