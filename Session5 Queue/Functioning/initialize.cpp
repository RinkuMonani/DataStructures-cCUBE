/*

    NOTE ABOUT SESSION 4 STACK
        - I SAID STACK DS ALLOCATED MEMORY IN STACK, 
        - THAT DOESN'T HAPPEN ALWAYS
        - MEMORY IS ALLOCATE IN STACK ONLY WHEN YOUR STACK IS BEING IMPLEMENTED
        - USING A FIXED SIZE DS SUCH AS AN ARRAY.
        - OTHERWISE MEMORY IS ALLOCATED IN HEAP

    TOPICS:
    1. Declaration of Queue
    2. Insert object of User Defined datatype into queue

*/

#include<iostream>
#include<queue>
using namespace std;

class People{
    string name;
    int age;

public:
    People(string name, int age){
        this->name = name;
        this->age = age;
    }

    string getName(){
        return this->name;
    }
};

int main(){

    queue<People> pq;

    People mihir("Mihir", 20);
    People shivam("Shivam", 19);

    pq.push(mihir);
    pq.push(shivam);



    return 0;
}