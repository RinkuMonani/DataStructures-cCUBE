/*
    1. Declaration and Initialization of Arrayh Varibale
*/

#include<iostream> // >> <<
using namespace std;

int main(){

    // case 1
    // int A[]; //compliation error

    // case 2
    // int A[5]; //garbage values

    // case 3
    // int A[5] = {1, 2, 3}; // 1 2 3 0 0

    //case 4
    // int A[3] = {1, 2, 3, 4, 5 }; //error: too many initializers for 'int [3]'

    //case 5
    // int A[] = {'A', 'B', 'C'}; //char -> int

    //case 6
    // int A[] {};

    //case 7
    // int A[5] {};

    //case 8
    int A[5] {5, 1, 3, 4, 2, 5};

    int size = sizeof(A) / sizeof(A[0]);

    cout<<"\noutput : ";
    for(int i=0; i<size; ++i){
        cout<<A[i]<<" ";
    }

    cout<<"\nsize : "<<size;
    return 0;
}

