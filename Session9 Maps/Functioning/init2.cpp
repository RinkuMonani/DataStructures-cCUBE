/*

    MAP: https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/

    MULTIMAP: https://www.geeksforgeeks.org/multimap-associative-containers-the-c-standard-template-library-stl/

    PAIR: https://www.geeksforgeeks.org/pair-in-cpp-stl/#:~:text=The%20pair%20container%20is%20a%20simple%20container%20defined,two%20values%20which%20may%20be%20different%20in%20type.
*/

#include<iostream>
#include<map>
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    // map<int , int> mymap;

    // // cout<<"\nSize: "<<mymap.size();
    // // cout<<"\nis empty? "<<mymap.empty();
    
    // mymap.insert({2, 4});
    // mymap.insert({3, 9});
    // mymap.insert({1, 10});
    // mymap.insert({0, 0});


    // // 1, 2, 3, 4,....50, 60

    // mymap.insert(mymap.begin(), {10, 100});

    // for(auto itr = mymap.begin(); itr != mymap.end(); ++itr){
    //     cout<<itr->first<<" "<<itr->second<<"\n";
    // }

    // mymap[10]++;

    // cout<<"\nafter inserting\n";

    // for(auto itr = mymap.begin(); itr != mymap.end(); ++itr){
    //     cout<<itr->first<<" "<<itr->second<<"\n";
    // }

    // // map::find

    // // if(mymap.find(10) != mymap.end()){
    // //     cout<<"\nexists";
    // // }
    // // else{
    // //     cout<<"\nnot exists";
    // // }

    // auto it = mymap.find(11);

    // if(it == mymap.end())
    //     cout<<"\ndoes not exist!";
    // else{
    //     cout<<"\nvalue: "<<it->second;
    // }


    pair<int, int> p (10, 100);

    cout<<"\nfirst: "<<p.first<<" "<<" second: "<<p.second;

    map<int, pair<string, int>> students;

    students.insert({1, pair<string, int>("Rinku", 80)});

    auto it = students.begin();

    cout<<"\nid : "<<it->first<<" Name: "<<it->second.first<<" Enroll: "<<it->second.second;

    vector<pair<int, int>> V;

    V.push_back(make_pair(1, 2));

    /*

    [(1, 2), (10, 11)]

    */

    cout<<"\nV1: "<<V[0].first<<" "<<V[0].second;







}