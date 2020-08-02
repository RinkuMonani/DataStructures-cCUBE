/*
    Topic: Call by Value, by reference
    - reserve(size)
    - & operator
*/

#include<iostream>
#include<vector>
using namespace std;

void callbyvalue(vector<int> V1){
    for(int i=0; i<V1.size(); ++i){

        V1[i] = V1[i] * 2;
    }
}


void callbyref(vector<int> &V1){
    for(int i=0; i<V1.size(); ++i){

        V1[i] = V1[i] * 2;
    }
}

int main(){

    vector<int> V {1, 2, 3};
    
    callbyvalue(V);
    callbyref(V);

    cout<<"\noutput 2 : ";
    for(int v : V){
        cout<<v<<" ";
    }

    return 0;
}