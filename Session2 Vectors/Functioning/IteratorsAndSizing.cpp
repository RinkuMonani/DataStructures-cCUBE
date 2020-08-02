#include<iostream>
#include<vector>
using namespace std;
void disp(vector<int> &x){
    cout<<"\nSize - "<<x.size();
    cout<<"\nCapacity - "<<x.capacity();
}
int main(){
    vector<int> v;
    disp(v);

    //1# Illustration of how vectors allows the size flexibility.
    v.reserve(4);//Requests that the vector capacity be at least enough to contain n elements.
    disp(v);

    for(int i=0;i<3;i++)
        v.push_back(i*2);
        
    disp(v);
    v.push_back(6);

    disp(v);
    v.push_back(8);
    disp(v);
    //how to shrink the capacity of vector equal to the size of vector
    //v.shrink_to_fit();
    //disp(v);
    v.resize(7); // size increases to 7 - {0,2,4,6,8,0,0}
    v.resize(10,5);//all the new elements are initialized with value 5 - {0,2,4,6,8,0,0,5,5,5}


    //2# Element Access using reference functions - these functions returns the reference of element
    cout<<endl;
    cout<<v[4]<<"\n";
    cout<<v.front()<<"\n";// returns the first element
    cout<<v.back()<<"\n";//returns the last element; end() != back()
    cout<<v.at(4)<<"\n";//returns the value stored at index given in the argument at(int index);
    

    //3# iterators - Variables that specially built for traversing C++ containers
    //print in normal order - begin() points to first element and end() location after last position
    //these functions returns the reference pointer which points to the address of first and last element
    //  value - 0   1   2   3           (size-4)
    //  add   - x1  x2  x3  x4  x5
    //          ^               ^
    //        front()          end()
    for(auto i=v.begin();i!=v.end();++i){
        cout<<*i<<" ";
    }
    cout<<"\n";
    //print in reverse order - rbegin() returns a reverse iterator from last
    //rend() returns the element preceding first element(hypothetically)
    for(auto i=v.rbegin();i!=v.rend();i++){
        cout<<*i<<" ";
    }
    // there are also cbegin(), cend(), crbegin(), crend() which will return constant iterators.
    // you might have guessed. these iterators can't be modified.
}
