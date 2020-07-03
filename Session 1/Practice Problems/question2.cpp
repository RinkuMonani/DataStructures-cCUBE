////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Question 2: Given an array nums of integers, return how many of them contain an even number of digits.
// Link: https://leetcode.com/explore/featured/card/fun-with-arrays/521/introduction/3237/
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int findNumbersAgain(int nums[], int size){
    int count = 0;

    for(int i=0; i<size; ++i){  
        if(to_string(nums[i]).length() % 2 == 0){
            count++;
        }
    }
    return count;
}

int main(){
    // int nums[] = {12, 234, 1234, 1, 56, 16};

    //alternate way of initializing an array in cpp
    int nums[] {12, 234, 1234, 1, 56, 16};

    int size = sizeof(nums) / sizeof(nums[0]);
    
    cout<<findNumbersAgain(nums, size)<<"\n";
}