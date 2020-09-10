/*
    QUESTION: 
    Given a matrix,
    return the number of rows having unique elements and 
    the number of columns having unique elements,
    return -1 if a no row or column has unique elements.

    Input: 
    First line of input is the number of test cases, T*2 lines follow
    For each test case, the first line of input is the size of matrix, N
    Next line of input consists of N*N elements;

    Output:
    For each testcase, print the result separated by a space.

    Sample Input:
    2
    4
    2 1 4 3 1 2 3 2 3 6 2 3 5 2 5 3
    2
    1 2 1 2

    Sample Output:
    1 2
    2 -1

    LINK: https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/000000000020993c

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;

    int N;
    while(tc--){
        cin>>N;

        // vector<set<int>> col (
        vector<set<int>> col (N, set<int>());

        int unique_rows=0, unique_cols=0;
        int temp;

        for(int i=0; i<N; ++i){
            // cout<<"\ni";
            unordered_set<int> row;

            for(int j=0; j<N; ++j){
                // cout<<"\nj";
                cin>>temp;
                row.insert(temp);
                col[j].insert(temp);
            }

            if(row.size() == N) unique_rows++;
        }

        for(int i=0; i<col.size(); ++i){
            if(col[i].size() == N) unique_cols++;
    
        }


        cout<<(unique_rows == 0 ? -1 : unique_rows)<<" "<<(unique_cols == 0 ? -1 : unique_cols)<<"\n";
    }
}