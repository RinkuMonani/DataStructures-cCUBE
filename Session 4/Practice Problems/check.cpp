#include<stack>
#include<iostream>
using namespace std;

// stack<char> op;
string op = "";
void insert(char c, int times){
    for(int i=0; i<times; ++i){
        op += c;
    }
}
void  bracketify(string eq){
    int open=0;
    

    for(char e : eq){
        if(e >=49 && e<=57){
            int num = e - 48;
            if(open < num){
                insert('(', num - open);
                insert(e, 1);
                open += (num - open);
            }
            else if(open > num){
                insert(')', open - num);
                insert(e, 1);
                open -= (open - num);
            }
        }
    }

    insert(')', open);

    // string out = "";
    // while (!op.empty()){
    //     out += op.top();
    //     op.pop();
    // }
    // return out;
}
int main(){
    string eq = "4213";
    bracketify(eq);
    cout<<op;
}