#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
/* the followign implements a new data type, 
pretty much what you can do with an ordinary class. 
here we want to see how to implement class member functions,
outside the class
*/
template<class T> 
class Tripple {
    private: 
        T a, b, c;// three variables of type T
    public:
        Tripple(T x, T y, T z){// constructor
            a=x;
            b=y;
            c=z;
        }
        string show();
        T get_min();
        int get_sum(); // you can also specify type if you don't want type T
    
};

template <class T>
string Tripple<T>::show(){
    return "<"+to_string(a)+", "+to_string(b)+", "+to_string(c)+">";
}
template <class T>
T Tripple<T>::get_min(){
    return min(min(a,b),c); // min function located in algorithm 
    // library works with 2 values
}
template <class T>
int Tripple<T>::get_sum(){
    return a+b+c;
    // min function located in algorithm library works 
    // with 2 values

}
int main(){
    Tripple<int> A(1,2,-3);
    cout << A.show()<< endl;
    cout << A.get_min()<< endl;
    cout << A.get_sum()<<endl;// adds the elements
    return 0;
}
