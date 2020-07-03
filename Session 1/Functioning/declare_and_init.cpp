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
    // int A[];    // error: storage size of 'A' isn't know

    //case 2
    // int A[5];    // garbage values

    //case 3
    // int A[5] = {1, 2, 3};      // 1 2 3 0 0 

    //case 4
    // int A[3] = {1, 2, 3, 4, 5};    // error: too many initializers for 'int [3]' 

    // case 5
    int A[] = {'A', 'B', 'C'};       //type conversion char -> int

    //////////////////////////////////////////////////////////////////

    // case 6
    // int A[] {}; 

    // case 7
    // int A[5] {}; 

    // case 8
    // int A[5] {5}; 

    int size = sizeof(A) / sizeof(A[0]);
    // cout<<"\nsize : "<<size<<endl;

    for(int i=0; i<size; ++i){
        cout<<A[i]<<" ";
    }

    return 0;
}
