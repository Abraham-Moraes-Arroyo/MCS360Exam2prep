// Vector member functions operating on vector data type
// of special imporatance are functions begin()/ end(), which
// return an iterator pointing to the first element in the 
// sequence 

#include <iostream>
#include <vector>
#include <algorithm> // for the reverse function
using namespace std;

int main(){
    vector<int> v{7,3,8,6,0,4,5,2,7};
    cout<< v.size()<< endl; // size() shows current number of elements
    cout << v.capacity()<< endl; // capicity shows how many elements can be stored in vector
    cout << v.at(3)<< endl; // at() function returns the value at the index location that is in the ()
    v.pop_back();// pop_back() removes the last element in the vector!
    v.push_back(2); // push_back() appends to then end of the vector;
    // when niserting at location other than front/ back, use iterators
    v.insert(v.begin()+ 4, 9); // inserts integer 9 at index location 4, using iterator with v.begin()
    for (auto x: v) cout << x<< " "; cout << endl;

    v.erase(v.begin()+4); // erases value at index location 4, using an iterator with v.begin()
    for (auto x: v) cout << x<<" "; cout << endl;  
    // all elements can be reversed with 
    reverse(begin(v), end(v));
    for (int x: v) cout << x<< " "; cout << endl;
    v.clear(); // clear() clears the vector of all its elements! does not return anything, so we do not print
    cout << v.empty()<< endl; // empty function returns true (1) if vector is empty or false (0) if vector is not empty
    return 0;
}
