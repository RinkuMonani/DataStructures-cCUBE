/*
////////////////////////////////////////////////////////////////////////////////////////////////////

  Question 3: Given an array with n objects colored red, white or blue, 
              sort them in-place so that objects of the same color are adjacent, 
              with the colors in the order red, white and blue.

              Here, we will use the integers 0, 1, and 2 
              to represent the color red, white, and blue respectively.

  Input: [2,0,2,1,1,0]

  Output: [0,0,1,1,2,2]

////////////////////////////////////////////////////////////////////////////////////////////////////
*/

#include<iostream>
#include<vector>
using namespace std;

// void sortColorsTwoPass(vector<int>& nums) { }

// void sortColorsOnePass(vector<int>& nums) { }

int main(){
    
    vector<int> input {2,0,2,1,1,0};

    // sortColorsTwoPass(input);
    // sortColorsOnePass(input);
    
    cout<<"\nOutput : ";
    
    for(int i : input){
        cout<<i;
    }
    return 0;
}
