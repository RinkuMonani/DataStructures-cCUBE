#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    //add element at back of vector
    v.push_back(10); // v = {10}
    v.emplace_back(20); //v = {10,20}
    v.emplace_back(30); // v ={10,20,30}

    // add elements at front and at any position
    // no inbuilt method to directly add at front as it's not suggested
    v.insert(v.begin(),40);     // vectorName.insert(position_iterator,value) v = {40,10,20,30};
    v.insert(v.begin()+3,25);   //you must've guessed - v = {40,10,20,25,30};
    v.emplace(v.begin(),5) ;    // v = {5,10,20,25,30,40};
    
    //remove element from back
    v.pop_back(); // v = {5,40,10,20,25}
    v.erase(v.end()-1); // v = {5,40,10,20}
    
    //remove from front and any poisition
    v.erase(v.begin());     // v = {40,10,20}
    v.erase(v.begin()+1);   // yes you're right v = {40,20}
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    // clear the entire vector
    v.clear();

    cout<<"\n";
    cout<<"Size - "<<v.size();
    cout<<"\nCapacity - "<<v.capacity();
}

