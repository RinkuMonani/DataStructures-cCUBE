/*
    QUESTION:
    Given an array of positive integer elements in range (1, 100)
    Check if there are any duplicate numbers in the array.
    Return "NO", if there are no duplicates, otherwise return "YES"

    Sample Input:
    3
    5
    4 5 1 9 10
    50
    1 91 80 53 31 17 57 10 31 68 73 17 57 94 74 14 29 44 29 16 4 21 28 68 28 53 91 98 60 61 61 88 37 52 48 29 0 96 91 37 74 5 31 84 28 57 80 92 22 69
    50
    1 91 80 53 31 17 57 10 31 68 73 17 57 94 74 14 29 44 29 16 4 21 28 68 28 53 91 98 60 61 61 88 37 52 48 29 0 96 91 37 74 5 31 84 28 57 80 92 22 1

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

        vector<int> data(N+1, 0);
        set<int> set;

        int flag = 0;
        int temp;
        
        for(int i=1; i<=N; ++i){
            cin>>temp;
            // data[temp] += 1;
            set.insert(temp);
        }

        // for( int d : data) {

        //     if(d > 1){
        //         flag = 1;
        //         cout<<"YES\n";
        //         break;
        //     }
        // }

        // cout<<"\nset size : "<<set.size();
        if(set.size() != N) cout<<"YES\n";
        else cout<<"NO\n";
            

        // if(flag == 0) cout<<"NO\n";
    }    
}



// #include<time.h>
// #include<cstdlib>
// int main(){
//     int max;
//     max = 100; 
   
//     srand(time(0));
//     for(int i=1; i<=50; ++i)
//     cout<<(rand()%max)<<" ";
// }

