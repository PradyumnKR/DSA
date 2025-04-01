//Insertion in unordered set is O(1)

//Searching through hashing is O(1)

//Deletion through hashing is O(1)

// In case of collision , we use chaining or open addressing to handle the collision. In chaining, we use a linked list
// Probing in open addressing is used to find the next position in the array to insert the element.

//It stores data in key value pairs like a dictionary

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,string> mp;
    mp.insert({1,"hello"});
    mp[10] = "World";
    cout<<mp.size()<<endl;
    for (auto it :mp){
        cout<<it.first << " " << it.second<<endl;
    }
    mp.erase(10);

    for (auto it :mp){
        cout<<it.first << " " << it.second<<endl;
    }
    if(mp.find(1) != mp.end()){
        cout<<"YES";
    }

 return 0;
}

