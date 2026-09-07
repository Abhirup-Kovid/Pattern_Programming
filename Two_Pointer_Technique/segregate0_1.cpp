// Given an array arr[] consisting of only 0's and 1's. Modify the array in-place to segregate 0s onto the left side and 1s onto the right side of the array.

// Examples :

// Input: arr[] = [0, 1, 0, 1, 0, 0, 1, 1, 1, 0]
// Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1]
// Explanation:  After segregation, all the 0's are on the left and 1's are on the right. Modified array will be [0, 0, 0, 0, 0, 1, 1, 1, 1, 1].
// Input: arr[] = [1, 1]
// Output: [1, 1]
// Explanation: There are no 0s in the given array, so the modified array is [1, 1]
// Constraints:
// 1 ≤ arr.size() ≤ 105
// 0 ≤ arr[i] ≤ 1


#include <bits/stdc++.h>
using namespace std;

void segregate0_1(int arr[], int n){
    int l = 0;
    int h = n-1;

    while(l<h){
        if(arr[l]==0){
            l++;
        }
        else if(arr[h]==1){
            h--;
        }
        else{
            int k = arr[l];
            arr[l] = arr[h];
            arr[h] = k;
            l++;
            h--;
        }
    }
}

int main(){
    int arr[] = {1,1,0,0,1,0,1,0,1,0,0}; 
    int n = sizeof(arr)/sizeof(arr[0]);

    segregate0_1(arr, n);

    cout<<"The Segregated array of 0 and 1 is "<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}