#include<map>
#include<unordered_map>
// #include<multimap>
#include<iostream>
using namespace std;

int main(){

    pair<int, int> p (10, 2);

    cout<<p.first<<"\n";

    multimap<int, int> mymap;

    cout<<"\nmap size : "<<mymap.size();
    cout<<"\nis empty ? : "<<mymap.empty();
    mymap.insert({5, 10});
    mymap.insert({25, 50});
    mymap.insert({12, 24});
    mymap.insert({15, 30});
    mymap.insert({3, 6});


    auto it = mymap.end();
    
    cout<<endl;
    for(auto itr = mymap.begin(); itr != mymap.end(); ++itr){
        cout<<"\n k: "<<itr->first<<" v: "<<itr->second; 
    }

    mymap.insert({3, 9});
    // mymap[3] = 9;

    cout<<endl;

    for(auto itr = mymap.begin(); itr != mymap.end(); ++itr){
        cout<<"\n k: "<<itr->first<<" v: "<<itr->second; 
    }

    multimap<int, pair<int, int>> pairmap;

    pairmap.insert({1, pair<int, int>(2, 3)});
    pairmap.insert({1, pair<int, int>(3, 3)});
    pairmap.insert({1, pair<int, int>(1, 3)});
    pairmap.insert({10, pair<int, int>(2, 3)});

    cout<<endl;

    for(auto itr = pairmap.begin(); itr != pairmap.end(); ++itr){
        cout<<"\n k: "<<itr->first<<" v: "<<itr->second.first<<" v2 : "<<itr->second.second; 
    }

    pairmap.erase(1);

    cout<<endl;

    for(auto itr = pairmap.begin(); itr != pairmap.end(); ++itr){
        cout<<"\n k: "<<itr->first<<" v: "<<itr->second.first<<" v2 : "<<itr->second.second; 
    }
    


    return 0;
}