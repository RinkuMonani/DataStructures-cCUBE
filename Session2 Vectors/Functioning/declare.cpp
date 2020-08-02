#include<iostream>
#include<vector>

using namespace std;

int main(){

    // containerName <data type> varibaleName;
    vector<int> A;

    // containerName <data type> varibaleName ( size );
    // vector<int> A (5);

    // containerName <data type> varibaleName (size, value);
    // vector<int> A (5, 1);

    // containerName <data type> varibaleName {values};
    // vector<int> A {1, 2, 3, 4, 5};

    // initalizing vector with an array
    // int array[] {1, 2, 3};
    // vector<int> V (array);

    // initalizing vector with a vector
    // vector<int> A {1, 2, 3};
    // vector<int> B (A);

    // initalizing vector with a vector using iterators
    // .begin(), .end()
    // vector<int> A {1, 4, 2}; 

    /*
        1000 1
        1004 4
        1008 2
    */


    // vector<int> B (A.begin(), A.end()-1);

    // vector<int> B (A.rbegin(), A.rend());

    // Begin->{1, 2, 3}<-end


    // vector<int> B (A.begin(), A.rbegin());

    // adding values to vector using push_back;

    vector<int> B;
    B.reserve(3);

    B.push_back(1);
    B.push_back(2);
    B.push_back(3);
    B.push_back(4);



    // display size and capacity
    cout<<"\nSize : "<<B.size();

    // display vector values
    cout<<"\nCapacity : "<<B.capacity();

    cout<<"\noutput : ";
    for(int i=0; i<A.size(); ++i){
        cout<<B[i]<<" ";
    }

    // A , 5 -> {1, 2, 3, 4, 5, 6} C:10, S:6





    return 0;
}