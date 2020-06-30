#include<iostream>
using namespace std;

// call by referernce
// call by value

void modifyByValue(int v){
    v+=10;
}

void modifyByReference(int& v){
    v += 10;
} 

// modifying array by refernce
void modifyArray(int B[], int N){
    
    for(int i=0; i<N; ++i){
        B[i] += 10;
    }
}

// returning array from function
int* returnFromFunc(int B[], int N){
    // int *C; //nothing happens
    int *C = new int(N); // works fine
    // int C[N]; //warning, output does not appear
    
    for(int i=0; i<N; ++i){
        C[i] = B[i];
    }
    return C;
}

int main(){

    // variables
    int variable = 10;
    
    modifyByValue(variable);
    cout<<"\nModified by Value : "<<variable<<"\n";

    modifyByReference(variable);
    cout<<"\nModified by Reference : "<<variable<<"\n";

    cout<<"----------------------------------------------------\n";

    // ARRAYS
    int A[] = {1, 2, 3, 4};
    int size = sizeof(A)/ sizeof(A[0]);

    // int modifiedArray[] = modifyArray(A, size);
    modifyArray(A, size);

    cout<<"\nModified Array : ";
    for(int m : A)
        cout<<m<<" ";
    cout<<"\n";

    cout<<"----------------------------------------------------\n";

    int *B = returnFromFunc(A, size);

    cout<<"\nArray A : ";
    for(int i:A){
        cout<<i<<" ";
    }
    cout<<"\n";

    cout<<"\nArray returned from function : ";
    for(int i=0; i<size; ++i){
        cout<<B[i]<<" ";
    } 
    cout<<"\n";
    return 0;
}