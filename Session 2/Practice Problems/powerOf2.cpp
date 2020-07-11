/*
    Question 0: Given an integer, write a function to determine if it is a power of two.

    Input: 1
    Output: true 
    Explanation: 2^0 = 1

    Input: 16
    Output: true

    // Hidden Test Cases

    Input: 218
    Ouput: false

    inp: 4
    100

     .....8 4 2 1
          1  0 0 0 



*/

#include<iostream>
using namespace std;

bool check(int N){
    if(N <= 0)
        return false;

    if(!(N & (N-1)))
        return true;
    else
        return false;
    
}

int main(){

    int N;
    cin>>N;

    cout<<check(N)<<"\n";
    // 0: false
    // 1: true 

}
