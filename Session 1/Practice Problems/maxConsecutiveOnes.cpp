//////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
//
//  Question 1 : Given a binary array, find the maximum number of consecutive 1s in this array.
//  Link: https://leetcode.com/explore/featured/card/fun-with-arrays/521/introduction/3238/
//
//  Input: 
//  1, 1, 0, 0, 1, 0, 1, 1, 1 
//
//  Output:
//  3
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int getMaxConsecutiveOnes(int A[], int size){
    int maxOnes = 0;
    int temp = 0;

    for(int i=0; i<size; ++i){
        if(A[i] == 1){
            temp++;
        }
        else if(A[i] == 0){
            temp = 0;
        }
       
       maxOnes = max(temp, maxOnes); // min(a, b)

    }

    return maxOnes;
}

//driver code
int main(){

    int binaryArray[] {1 ,1, 1, 1, 1, 0, 1, 1, 1};
    int size = sizeof(binaryArray) / sizeof(binaryArray[0]);
    int result = getMaxConsecutiveOnes(binaryArray, size);
    cout<<result<<"\n";


    return 0;
}