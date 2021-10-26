#include <iostream>
using namespace std;
/* by setting up this template, we can use 
constant e with different types:
int 
double 
*/
template<typename T> 
constexpr T e = T(2.71828);
int main(){
    cout << e<int> << endl;
    cout << e<double> << endl;
    return 0;
}
