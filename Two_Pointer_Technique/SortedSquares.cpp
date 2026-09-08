// 977. Squares of a Sorted Array
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

// Example 1:

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
// Example 2:

// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]
 

// Constraints:

// 1 <= nums.length <= 104
// -104 <= nums[i] <= 104
// nums is sorted in non-decreasing order.
 

// Follow up: Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach?



#include <bits/stdc++.h>
using namespace std;

vector<int> SortedSquares(vector<int>& arr ){
    int n=arr.size();
    vector<int> result(n);
    int l=0;
    int r=n-1;
    int officer = n-1;

    while (l <= r) {
        int leftSquare = arr[l] * arr[l];
        int rightSquare = arr[r] * arr[r];

        if (leftSquare > rightSquare) {
            result[officer] = leftSquare;
            l++;
        } else {
            result[officer] = rightSquare;
            r--;
        }
        officer--;
    }
    return result;

}

int main(){
    vector<int> arr= {-4,-1,-2,0,3,10};
    
    vector<int> result=SortedSquares(arr);
    for(int i: result){
        cout<<i<<" ";
    }
    cout<<endl;
}