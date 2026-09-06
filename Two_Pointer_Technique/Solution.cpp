#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
                int length=numbers.size();
                int i=0;
                int j=length-1;

                while(i<j){
                    int sum = numbers[i] +numbers[j];
                    if(sum==target){
                        return vector<int>{i+1,j+1};

                    }
                    else if(sum>target){
                j--;
            }
            else if(sum<target){
                i++;
            }
        }
        return vector<int>{};
    }
};

int main(){
    Solution sol;
    vector<int> numbers={2,3,4,5,6,7,10};
    int target=9;
    vector<int> result=sol.twoSum(numbers, target);
    if(!result.empty()){
        cout<< "Indices: " << result[0]<< " " << result[1]<<endl;

    }
    else{
        cout << "No solution"<<endl;

    }
    return 0;
}


