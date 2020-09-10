#include<iostream>
using namespace std;

struct Node{
    int value;
    
    Node* next;
    Node* prev;

    Node(): value(10), next(nullptr), prev(nullptr) {};
    
    Node(int value): value(value), next(nullptr), prev(nullptr) {}
    
    Node(int value, Node* NEXT, Node* PREV): value(value), next(NEXT), prev(PREV) {}

    // Node(): value(10), next(nullptr) {};
    
    // Node(int value): value(value), next(nullptr) {}
    
    // Node(int value, Node* NEXT): value(value), next(NEXT) {}
};


int main(){

    Node* head = NULL;

    // Node* newn1 = new Node(2, head, head);
    // // head = newn1;
    
    // Node* newn2 = new Node(4, head, newn1);
    // newn1->next = newn2;

    // Node* ptr = head -> next;
    // while(ptr != head){
    //     ptr= ptr->next;
    // }

    Node* ptr = head;
    
    for(int i=0; i<10; ++i){
        Node* newn = new Node(i+1, head, ptr);

        ptr->next = newn;
        ptr = newn;
    }

    Node* ptr2 = head->next;
    while(ptr2 != head){
        cout<<"\nval : "<<ptr2->value<<endl;
        ptr2 = ptr2 -> next;
    }

    // head -> <- 2 -> head

    // head -> NULL

    // head -> 2 -> 4 -> head


}

// int main(){

//     /*
//         head-> 2, 4, 6 -> NULL
//         A {2, 4, 6}
//         A[i];
//     */

//     Node* head = NULL;
    
//     Node* newn3 = new Node(6);
//     Node* newn2 = new Node(4, newn3);
//     Node* newn1 = new Node(2, newn2);
//     head = newn1;

//     Node* ptr = head;

//     Node* lastNode = NULL;

//     while(ptr->next != NULL){
//         ptr = ptr->next;
//     }

//     lastNode = ptr;

//     cout<<"\nlast node value : "<<lastNode->value<<endl;

//     /*

//         2 -> 4 -> 6 -> NULL

//         ptr = head
//         ptr = node with value 4
//         ptr = node wi6th value 6
//         ptr = NULL
        
//     */

//     /*
//         (ptr = head) -> 2, 4,  -> NULL
        
//     */

//     return 0;
// }


/*

int* p1 = &p2;

int var1 = 2;
float f1 = 1.2;

int* p = var1;
float* 


*/