/*
    1. Passing varibale by Value
    2. Passing varibale by Reference
    3. Passing array varibable
    4. returning an array varibale from function
*/

#include<iostream>
using namespace std;

// &

void modifyVaribaleByValue(int v){
    v += 10;
    cout<<"\nv : "<<v<<"\n";
}

void modifyVaribaleByref(int &v){
    v += 10;

    cout<<"\nv : "<<v<<"\n";
}

// void modify(int A[], int size){

//     for(int i=0; i<size; ++i){
//         A[i] += 1;
//     }

// }

// int[]

// int* modify(int A[], int size){

//     // int B[size];

//     int *B = new int(size);

//     for(int i=0; i<size; ++i){
//         B[i] = A[i];
//     }


//     return B;

// }

int* getTable(int N){

    // int table[5];
    int *table = new int(5); 
   

    for(int i=1; i<=5 ; ++i){
        table[i-1] = N * i;
    }

    return table;
}

int main(){

    int A[] = {1, 2, 3};
    int size = sizeof(A) / sizeof(A[0]);

    modify(A, size);

    cout<<"\nArray : "<<"\n";
    for(int i=0; i<size; ++i){
        cout<<A[i]<<" ";
    }

    return 0;
}