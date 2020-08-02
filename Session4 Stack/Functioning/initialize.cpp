/*
    STACK - initialization using STL

*/

#include<stack>
#include<iostream>
// using namespace std;

/*
    push(value)
    pop()

    size()
    empty()

    top()

*/
int main(){

    stack<int> stk;

    stk.push(1);
    stk.push(2);
    stk.push(3);

    // 1, 2, 3

    std::cout<<stk.empty();

    cout<<"\nsize : "<<stk.size();
    stk.pop();
    cout<<"\nsize : "<<stk.size();

    while(!stk.empty()){
        cout << stk.top(); // 3, 2, 1
        stk.pop();

        int a;
        cout<<a;
    }

    // stack::swap()

    stack1.swap(stack2)

    stack::emplace()

    // push_back, emplace_back -> vector

    // push, emplace -> stack

    vector.push_back(2); -> {2}

    class People{
        // 100
    }
    // 1000



    return 0;
}


/*

    func1(int n) {
        if(n == 5){
            return 0;
        }
        else{
            var = func1(n+1);
        }
    }

    func1(1);

    stack:
    func1(1)
    func1(2)
    func1(3)
    func1(4) <- top
    


    station ->
    Ahm
    anand 
    vadodara <-
    


*/




