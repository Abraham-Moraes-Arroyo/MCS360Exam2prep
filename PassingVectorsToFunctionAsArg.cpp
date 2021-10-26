#include <iostream>
#include <vector> // needed so we can define vectors
#include <string>
using namespace std;
/*
Here we are passing Vectors to function as arguments
We take a vector and have the elements be increased by 5
*/
vector<int> add_5(vector<int> v){
    //inside functions, we need to say how long the vector 
    // we return should be
    vector <int> w(v.size());
    for(int i=0; i<v.size(); i++){
        w[i]=v[i]+5;
    }
    return w;
}

int main(){
    vector<int> v{1,2,3,4,5,6};
    vector<int> z;
    z=add_5(v);
    for(auto x: z) cout<< x<< " "; cout << endl;
    return 0;
}
