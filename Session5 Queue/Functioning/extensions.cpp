/*

    * Priority Queue -> heap
    * Deque - Double Ended Queue

    1 -> prn
    2 -> prn


    2, 3, 5, 1

    5, 3, 2 , 1

    3, 2

*/

#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    priority_queue<int, vector<int>, greater<>> pq;

    pq.push(2);
    pq.push(4);
    pq.push(5);
    pq.push(1);
    pq.push(0);

    // 2, 4, 5, 1, 0
    // 5, 4, 2, 1, 0

    cout<<pq.top();

    deque<int> dq;

    
}




