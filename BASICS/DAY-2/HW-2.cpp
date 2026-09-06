//Sum of first 10 numbers which are even 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    int count=0;
    for(int i=1; count!=10;i++){
        if(i%2==0){
            count++;
            sum+=i;
        }
    }
    cout<<"The sum of the firs 10 even numbers is: "<<sum;
}