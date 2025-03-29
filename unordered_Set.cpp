//Duplicated values are not allowed in a set. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr; 
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2); // This will not be inserted as it is already present in the set

    cout<<s.size()<<endl;

    //Random indexing is not allowed in set 
    //cout<<s[2]<<endl; this is not allowed
    // here auto , automatically will be used to get the type of the variable
    for(auto &i : s){
        cout<<i<<" ";
    }
    //find function gives beyond the last index if it cannot find the index
    cout<<endl;
    s.erase(1);//TO delete an element from a set
    if(s.find(1)!=s.end()){
        cout<<"1 is present in the set"<<endl;
    }
    else{
        cout<<"1 is not present in the set"<<endl;
    }

 
 return 0;
}

//remove duplicate and print unique elements from a array  ( do the code for all )

//unordered set is based on hashing.

//set is based on BST

//1. using two vectors
//2. using sorting and then checking i+1
//3. using set

//When to use unordered _set and when to use set

//1 . Unique values find 
//2. For faster search of elements then we should use un_ordered sets. 
//                 insert find
//array - unsorted O(1), O(n)
//        - sorted  O(n), O(logn)
//   set  - unordered O(1) ,search -O(1),find-O(1)
//    set    - ordered O(logn), search - O(logn), find -O(logn)


// we dont use set to sort any array because it is not efficient as for every element it will be logn (for each element) hence the complexity will be n*logn so we use sorting algorithm like quick sort or merge sort or heap sort or insertion sort etc.  //





