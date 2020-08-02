#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a; // container_name<data_type> variable_name;
    vector<int> a(5); // container_name<data_type> variable_name (size in int);
    vector<int> a(5,1); // container_name<data_type> variable_name(size in int, initialize all with int);
    // next method was depreciated after std=c++11
    vector<int> a {1,2,3,4,5}; //container_name<data_type> variable_name { elements } - no need to declare size;
    //initialize from array
    int arr[5] = {1,2,3,4,5};
    vector<int> a(arr,arr+5); //container_name<data_type> variable_name(arr_name, arr_name + arr_length);
    //copy from one vector to another
    vector<int> b(a); //container_name<data_type> copyTo_vector(copyFrom_vector);
    //one more way
    vector<int> b(a.begin(),a.end());// begin() and end() are iterator for containers - will be covered in next lectures.
    // for now - begin() gives the points to the first element and end() points to the last.


    a.push_back(1);a.push_back(2);a.push_back(3);
    cout<<a[0];
    cout<<"\nSize = "<<a.size();
    cout<<"\ncapacity = "<<a.capacity();
    return 0;
}
