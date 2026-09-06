//Sum of even numbers between 20 and 40(inclusively)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum=0;
    for (int i=20;i<=40;i++){
        if(i%2==0)
        sum+=i;
    }
    cout<<"The sum of the numbers between 20 to 40 inclusively isP: "<<sum;
}