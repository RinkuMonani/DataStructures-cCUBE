#include<stack>
#include<iostream>
using namespace std;

bool isBalanced(string eq){

    stack<char> stk;
    // cout<<stk.empty();

    for(char e : eq){
        if(e == '('){
            stk.push('(');
        }
        /*
            WE ARE NOT INCLUDING isEmpty() check here while calling stack::pop()
            because popping when stack is empty will return false for isEmpty()
            and that is exactly what we want for our solution.

            AS CPers, we are concerned about the RESULTS! 
            However if you find a sample case for which this solution might raise a problem, feel free to mention it!
        */
        else if( e == ')'){
            stk.pop();
        }
    }

    return stk.empty();
}

int main(){

    // string eq = "(A + B ( C * D ) - E";
    string eq = "((1 + 2) * 3)";

    cout<< "\nIs balanced : "<< (isBalanced(eq) == 0 ? "NO" : "YES");
    return 0;
}