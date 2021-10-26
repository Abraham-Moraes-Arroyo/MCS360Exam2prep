#include <iostream>
using namespace std;
// my_min function argumetns can now be of any type which
// the symbol "<" is applicable. for example, x and y can 
// be doubles, floats, etc but also characters

template <typename T> // using tempalte <class T> is fine as well
T my_min(T x , T y){
    T min;
    if (x< y)
        min =x;
    else   
        min =y;
    return min;
}
/*
Here we are going to take which values are smaller from 
the two
*/

int main(){
    cout << my_min(3, 5)<< endl;
    cout << my_min(4.56, 4.11)<< endl;
    cout << my_min('x','c')<< endl;
    return 0;
}
