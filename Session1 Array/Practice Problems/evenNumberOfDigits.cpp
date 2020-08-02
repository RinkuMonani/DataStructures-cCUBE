////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Question 2: Given an array nums of integers, return how many of them contain an even number of digits.
// Link: https://leetcode.com/explore/featured/card/fun-with-arrays/521/introduction/3237/
//
//  Input:
//  [12,345,2,6,7896]
//
//  Output:
//  2
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
// #include<string>
#include<bits/stdc++.h>
using namespace std;

// [12,345,2,6,7896]
int getCount(int A[], int size){
    int count = 0;

    for(int i=0; i<size; ++i){
        
        // int length = to_string(A[i]).length();

        string num = to_string(A[i]);
        // cout<<"\n num"<<("12"+5);
        int len = num.length();
        
        if(len % 2 == 0){
            count++;
        }

    }

    return count;
}

int main(){

    int A[] {12,345,2,6,7896, 123, 1111};
    int size = sizeof(A) / sizeof(A[0]);
    int count = getCount(A, size);
    cout<<count<<"\n";

}