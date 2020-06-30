////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Question 2: Check if N and its double exist in an array
// Link: https://leetcode.com/explore/featured/card/fun-with-arrays/521/introduction/3237/
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int getLength(int num){
    int len=0;

    int i=10, j=1;
    int mod = num % i;
    int div = mod / j;
    len++;

    while(mod != num){
        ++len;
        i *= 10;
        j *= 10;
        mod = num%i;
        div = mod / j;
    }

    return len;
}
int findNumbers(int nums[], int size) {
    int count = 0;

    for(int i=0; i<size; ++i){  
        if(getLength(nums[i]) % 2 == 0){
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
    cout<<findNumbers(nums, size)<<"\n";
}