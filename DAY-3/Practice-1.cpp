/**Given an integer n, compute the sum of all natural numbers from 1 to n (inclusive). If n is 0, the sum should be 0.

Examples:

Input: n = 6
Output: 21
Explanation: The sum of natural numbers up to 6 is: 1 + 2 + 3 + 4 + 5 + 6 = 21.
Input: n = 4
Output: 10
Explanation: The sum of natural numbers up to 4 is: 1 + 2 + 3 + 4 = 10.
Input: n = 0
Output: 0
Explanation: Since n is 0, the sum is 0.
Constraints:
0 ≤ n ≤ 104 */



#include <iostream>
using namespace std;

int sum_of_numbers(int n){
    int sum=0;
    if(n==0){
        sum=0;
        return sum;
    }
    else{
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        return sum;
    }
}

int main() {
    int n;
    cin >> n;

    int sum=sum_of_numbers(n);
    cout<<sum;
    

    return 0;
}