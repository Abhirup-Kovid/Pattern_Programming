//Sum of 10 numbers

#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter the numbers one by one for the sum and enter 0 to calculate the sum "<<endl;
    int sum=0;
    for(int i=0;num!=0;i++){
        cin>>num;
        sum=num+sum;
    }
    cout<<"The total sum is "<<sum<<endl;
}