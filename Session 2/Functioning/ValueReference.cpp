#include<iostream>
#include<vector>
using namespace std;
//call by value - doesn't affect the original vector
vector<int> callByValue(vector<int> x){
    for(int i=0;i<10;i++)
        x[i]*=x[i];
    return x;
}
// call by reference - manipulates the original vector
vector<int> callByReference(vector<int> & x){
    for(int i=0;i<10;i++)
        x[i]*=x[i];
    return x;
}
// call by const reference - used when only read-only operations needs to be performed on vector
void display(vector<int> const & v){
    for(int i=0;i<10;i++)
        cout<<v[i]<<" ";
        //assignment operation on vector v will generate COMPILER ERROR
    cout<<"\n";
}

int main(){
    vector<int> originalVector;
    vector<int> DuplicateVector;
    DuplicateVector.reserve(originalVector.size()); // reserves the vector of size of another vector

    for(int i=1;i<=10;i++)
        originalVector.push_back(i);

    DuplicateVector = callByValue(originalVector);

    cout<<"Original vector after call by Value :\n";
    display(originalVector);
    cout<<"Vector Returned from Call by Value:\n";
    display(DuplicateVector);
    DuplicateVector.clear(); // clears the Duplicate vector - all elements are flushed.

    cout<<"\n\n";

    DuplicateVector = callByReference(originalVector);
    cout<<"Original vector after call by Reference :\n";
    display(originalVector);
    cout<<"vector returned from call by Reference :\n";
    display(DuplicateVector);
    return 0;
}
