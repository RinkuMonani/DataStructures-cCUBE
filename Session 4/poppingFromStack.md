### Popping from an empty stack

#### ISSUE:

1. stack::top() when called on an empty stack didn't throw an exception yet terminated the program control flow
2. stack::pop() when called on an empty stack neither throw an exception nor terminated the program but behaved abnormally.

First things first I am really glad you were still hung up on this and are here to know the answer.  

Now, I read a bunch of articles and posts on the internet and I would like to admit it straight that there happen to 
be not one but mulitple explanations to this! Due of lack of availability of any official documentation there are only theories and conclusions drawn by users of this *container*.

That's why I have included links to all the posts that I read to learn the answer of the undefined behavior so that you can look them up and select an explanation that works best for you logically.

Coming back to the lines of code that introduced us to this UB,

> INPUT  

> stack<int> stk;

> cout<<"Init size : "<<*stk.size()<<<endl;* 

> cout<<"Is empty : "<<*stk.empty()<<endl;* 

>

> stk.pop();

>

> cout<<"New size : "<<*stk.size()<<endl;*

> cout<<"Is empty : "<<*stk.empty()<<endl;*

>

>OUTPUT

>Init Size: 0

>Is empty: 1

>New Size: 4294967295

> Is empty: 0


From the above code we see that calling stack::pop() on an empty stack modifies the size of stack to some garbage value (probably that is what is defined as) and that is the reason stack::empty() returns a false.

After running above code we would think that since our stack is no longer empty (probably filed with some garbage values), stack::top() might return some output value to us but (drum rolls) it still terminates the program without any exception.

#### Possible Solution:

The (only, I guess) solution to saving our code from running into undefined behavior or abnormal termination while using *stack* is _to check for an empty stack by calling stack::empty() everytime we perform stack::pop()_.

There are coders out there who question this decision of the makers but I guess we can work with this solution for now.

#### Here are the links to those articles/ posts. Do check them out once. There are really interesting.

0. [Documentation of STL](https://stackoverflow.com/questions/1344040/documentation-for-stl). It is a closed discussion on stack overflow yet has great insights.

1. [SGI Refernce](http://www.martinbroadhurst.com/stl/table_of_contents.html). STL Refernce link picked from the stack overflow discussion in @0.

2. [C++ STL stack question: Why does pop() not throw an exception if the stack is empty?](https://stackoverflow.com/questions/4892108/c-stl-stack-question-why-does-pop-not-throw-an-exception-if-the-stack-is-em)

*I learned a lot more about these STL containers* (including the fact that the correct term is *container* and not DS) and I will make sure to discuss about it in the next session. Nevertheless, here are the links to those posts.

3. [Memory Allocation in STL C++](https://stackoverflow.com/questions/29869144/memory-allocation-in-stl-c#:~:text=Almost%20all%20STL%20containers%20memory,that%20have%20memory%20on%20stack.)

4. [STL stack uses a lot of memory](https://codeforces.com/blog/entry/17307)