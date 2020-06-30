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
    // int A[];

    //case 2
    // int A[5];

    //case 3
    // int A[5] = {1, 2, 3};

    //case 4
    // int A[3] = {1, 2, 3, 4, 5};

    // case 5
    int A[] = {'A', 'B', 'C'};
    
    int size = sizeof(A) / sizeof(A[0]);

    for(int i=0; i<size; ++i){
        cout<<A[i]<<" ";
    }

    return 0;
}
