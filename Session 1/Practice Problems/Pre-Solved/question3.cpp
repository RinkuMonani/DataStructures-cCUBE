////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Question 2: Check if N and its double exist in an array
// Link: https://leetcode.com/explore/featured/card/fun-with-arrays/527/searching-for-items-in-an-array/3250/
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

bool check(int A[], int size){

    for(int i=0; i<size; ++i){

        for(int j=i+1; j<size; ++j){
            if(A[j] == A[i]*2 || A[i] == A[j]*2){
                return true;
            }
        }
    }
    return false;
}
int main(){
    // int A[] {3, 5, 7, 1, 4, 14}; // 1
    // int A[] {3, 5, 7, 1, 4}; // 0
    int A[] {3, 5, 7, 2, 17, 1}; // 1

    int size = sizeof(A) / sizeof(A[0]);
    bool result = check(A, size);
    cout<<result<<"\n";

    return 0;
}