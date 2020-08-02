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

void sortColorsTwoPass(vector<int>& nums) { 
  int zeros=0, ones=0, twos=0;

  for(int n : nums){
    if(n == 0)
      zeros++;
    else if(n == 1)
      ones++;
    else if(n == 2)
      twos++;
  } // O(N)

  for(int i=0; i<zeros; ++i){
    nums[i] = 0;
  } // O(zeros)


  for(int i=0+zeros; i<zeros+ones; ++i){
    nums[i] = 1;
  } //()

  for(int i=zeros+ones; i<zeros+ones+twos; ++i){
    nums[i] = 2;
  }

  // O(N + N)
  // O(N)

}

// void sortColorsOnePass(vector<int>& nums) { }

int main(){
    
    vector<int> input {2,0,2,1,1,0};

    sortColorsTwoPass(input);

    // sortColorsOnePass(input);


    // sort(input.begin(), input.end()); // nlogn -> mergeSort

    
    cout<<"\nOutput : ";
    
    for(int i : input){
        cout<<i;
    }
    return 0;
}
