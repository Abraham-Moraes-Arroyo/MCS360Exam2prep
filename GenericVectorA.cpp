#include <iostream>
#include <vector>
#include <string>
using namespace std;
// the following implements a generic vector, capable
// of holding any data type 
template<class T, int n>
class my_container{
    T c {n}; // using vector, holding n elements
    public: 
    my_container(T v){ // constructor
        for (int i=0; i< n; i++){
            c[i]=v[i];
        }
    }
    void show(){
        for (int i=0; i< n; i++){
            cout << c[i]<< " ";
        }
        cout << endl;
    }
};
int main(){
    my_container<vector<int>, 3> C1({1,2,3});
    my_container<vector<char>,3> C2({'x','y','z'});
    C1.show();
    C2.show();
    return 0;
}
