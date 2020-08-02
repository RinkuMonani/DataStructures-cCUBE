
/*
1. Physical vs Logical DS

2. Time complexity
    - no. of operations perfomred by your algo wrt input size!
    
3. Space complexity: input size + auxillary space
    - Auxillary space: temporary space used by your program/algo.
*/

#include<iostream>
using namespace std;

int main(){

    int N, m , p = 10;     // auxillary space : sizeof(int) // 4*1 = 4 

    int array[N];   // input size: N * sizeof(int)  4 , 4, 4, 4*N 
    
    for(int i=0; i<N; ++i){     // No. of Operations: N, time complexity : O(N) // worst case
        cin>>array[i];
    }

    cout<<"\nDisplay : ";
    for(int i=0; i<N; ++i){     // No. of operations: N, time complexity : O(N);
        cout<<array[i]<<" ";
    }
     
    
    /*
    Space complexity -> 4 + 40  
    = sizeof(int) + N*sizeof(int);
    = O(N) 
    = O(N) 

    O(1) -> int temp=0;

    // we are only concerned about the space wrt number of inputs, 
    // and N in he number of inputs


    */   
}

/*
    4. Need for alternate DS?
        - each DS has its set of features

        - i.e, an array offers the advantage of accessing an element directly using an index no.
          but insertion or deletion in an array is very costly.
          Plus, an array is of fixed size!
        
        - So, you might not want to use an array for problems that require less accessing of data
          and more insertion/ deletion of data elements!

        - This is he reason why we need different data structure for different implementation.
           Here, using a linked list can prove to be more efficient.
           Since a insertion/ deletion to and from a linked list is more efficient than from an array
           
*/