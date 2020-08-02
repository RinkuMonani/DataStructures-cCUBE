#include<iostream>
#include <bits/stdc++.h> 

using namespace std;
int main(){
    long long int i, m;
    clock_t start, end;
    double time_taken;
    
    // cout<<"\n10^4";
    // start = clock(); 
    // for(i=0; i<=10000; ++i){
    //     m = i;
    // }
    // end = clock(); 
    // double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    // cout<<endl<<i;
    // cout<<endl<<time_taken;

    // cout<<"\n10^5";
    // start = clock(); 
    // for(i=0; i<=100000; ++i){
    //     m = i;
    // }
    // end = clock(); 
    // time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    // cout<<endl<<i;
    // cout<<endl<<time_taken;

    // 10^15

    cout<<"\n10^6";
    start = clock(); 
    for(i=0; i<=1000000; ++i){
        m = i;
    }
    end = clock(); 
    time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout<<endl<<i;
    cout<<endl<<time_taken;

    cout<<"\n10^7";
    start = clock(); 
    for(i=0; i<=10000000; ++i){
        m = i;
    }
    end = clock(); 
    time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout<<endl<<i;
    cout<<endl<<time_taken;

    cout<<"\n10^9";
    start = clock(); 
    for(i=0; i<=1000000000; ++i){
        m = i;
    }
    end = clock(); 
    time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout<<endl<<i;
    cout<<endl<<time_taken;
    return 0;
}