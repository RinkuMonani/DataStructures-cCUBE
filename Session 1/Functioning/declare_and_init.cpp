/*
// Array 
    - Physical Data stucture ~ it is the base.
    - It stores the data elements in contiguos memory locations
    
A:  1000 2 -> 0
    1002 4 -> 1
    1004 6
    1006 8
    1008 10 -> 4

    A[3] => 8

*/

#include<iostream> //header files
using namespace std; // kindof like packages

///////////////////////////////////////////////
// Declaration and Initialization of Arrays
//////////////////////////////////////////////

int main(){
    //case 1
    // int A[];     //error

    //case 2
    // int A[5];    //garbage value

    //case 3
    int A[5] = {1, 2, 3};       // 1, 2, 3, 0, 0

    //case 4
    // int A[3] = {1, 2, 3, 4, 5};     // error: too many initializers

    // case 5
    // int A[] = {'A', 'B', 'C'};       // type conversion

    //////////////////////////////////////////////////////////////////

    // case 6
    // int A[] {}; //no error - no output

    // case 7
    // int A[5] {}; // 0, 0, 0, 0, 0; 

    // case 8
    // int A[5] {5}; // 5, 0, 0, 0, 0; 

    int size = sizeof(A) / sizeof(A[0]);

    for(int i=0; i<size; ++i){
        cout<<A[i]<<" ";
    }

    return 0;
}
