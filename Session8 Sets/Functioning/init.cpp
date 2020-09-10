#include<iostream>

// #include<unordered_set>
#include<set>
using namespace std;

/*  
    ordered, unordered -> sorted
*/
int main(){

    set<int> oset;

    // cout<<"\nempty : "<<oset.empty();

    oset.insert(1);
    oset.insert(2);
    oset.insert(3);
    oset.insert(4);
    oset.insert(5);
    oset.insert(6);

    // oset.insert(4);

    cout<<"\nloweer bound : "<<*oset.lower_bound(4);
    cout<<"\nupper bound : "<<*oset.upper_bound(4);

    


    // cout<<"\nempty : "<<oset.empty();

    // cout<<"\nsize : "<<oset.size()<<endl;

    // for(auto it = oset.begin(); it != oset.end(); ++it){
    //     cout<<*it<<" ";
    // }

    // // 1 2 3 4 5 end

    // if(oset.find(3) == oset.end()){
    //     cout<<"\nnot present";
    // }
    // else
    //     cout<<"\npresent";



    return 0;
}