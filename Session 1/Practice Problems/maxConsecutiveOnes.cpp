/////////////////////////////////////////////////////////////////////
//
//  Question Link: https://leetcode.com/explore/featured/card/fun-with-arrays/521/introduction/3238/
//
/////////////////////////////////////////////////////////////////////
#include<iostream>
// #include<math.h>
using namespace std;

int getMax(int A[], int size){
    int maxOnes = 0;

    int point = 0, count=0;

    while(point < size){
        while(A[point] == 1){
            ++point;
            ++count;

            if(point >= size)
                return max(maxOnes, count);
        }
        if(A[point] != 1){
            maxOnes = max(maxOnes, count);
            count = 0;
        }
        ++point;
    }
    return maxOnes;
}

int getMaxAgain(int A[], int size){
    int maxOnes=0, count=0;

    for(int i=0; i < size; ++i){
        
        if(A[i] == 1)
            count++;
        else
            count = 0;

        maxOnes = max(maxOnes, count);
    }

    return maxOnes;
}
int main(){
    int A[] = {1, 0, 1, 1, 0, 0, 1, 1, 1};   // 3
    // int A[] = {1, 1, 1, 1, 0, 0, 1, 1, 1};   // 4
    // int A[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};   // 0
    // int A[] = {1, 0, 1, 0, 1, 0, 1, 0, 1};  // 1

    int size = sizeof(A) / sizeof(A[0]);

    int maxOnes = getMax(A, size);
    cout<<"\nRather Complex way : "<<maxOnes<<"\n";

    maxOnes = getMaxAgain(A, size);
    cout<<"\nWith a bit of thinking : "<<maxOnes<<"\n";
    
    return 0;
}