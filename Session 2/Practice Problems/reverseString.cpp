/*
////////////////////////////////////////////////////////////////////////////////////////////////////

  Question 1: Write a function that reverses a string. 
              The input string is given as an array of characters char[].

  Input: ["h","e","l","l","o"]  

  Output: ["o","l","l","e","h"]

  Do not allocate extra space for another array, 
  you must do this by modifying the input array in-place with O(1) extra memory.
  
  You may assume all the characters consist of printable ascii characters.

////////////////////////////////////////////////////////////////////////////////////////////////////
*/

#include<iostream>
#include<vector>
using namespace std;

// void reverseString(vector<char>& s) { }

int main(){
    
    vector<string> input {"h","e","l","l","o"};
    
    // reverseString(input);
    
    cout<<"\nOutput : ";
    
    for(string i : input){
        cout<<i;
    }
    return 0;
}
