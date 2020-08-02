/*
    Question: Given an arithmetic equation check if the paranthesis are balanced.

    input:
    "(1 + 2 - 3)"

    (1 + (2 * 3) - 4)

    Output:
    "Balanced"

*/

#include<stack>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool check(string eq){

    stack<char> stk;
    
    // stk.pop();
   
    for(char e : eq){
        cout<<"\neq : "<<e;

        if(e == '('){
            stk.push('(');
            cout<<"\npush";
        }
        else if( e == ')'){
            cout<<"\nexe1";
            stk.pop();
            cout<<"\nexe2";
            cout<<"\npop";
        }
        cout<<"\neq end";
    }

    cout<<"\nstk empty : "<<stk.empty();
    cout<<"\nstk top : "<<stk.top();
    return stk.empty();

}


int main(){

    // string eq = "(1+2-3)";
    // // string eq = "1+2-3)";
    // cout<< (check(eq) == 0 ? "False" : "True");
    stack<int> stk;
    cout<<"\nInit size : "<<stk.size();
    cout<<"\nis empty : "<<stk.empty();
    stk.pop();
   
    cout<<"\nInit size : "<<stk.size();
    cout<<"\nis empty : "<<stk.empty();

    stack<int, vector<int>> sv;
    cout<<"\nsv size : "<<sv.size();
    cout<<"\nis sv empty : "<<sv.empty();
    // cout<<"\nsv top : "<<sv.top();
    sv.pop();
    cout<<"\nsv size : "<<sv.size();
    cout<<"\nis sv empty : "<<sv.empty();
    cout<<"\ntop : "<<sv.top();
    return 0;
}
