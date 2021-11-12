//(Integer Equivalent of a Character) (c++ how to program)
//program pring the integer equivalent of a character 

#include <iostream>
using namespace std ;


int main () {
    char x ;
    cout << " Enter The char " << endl ;
    cin >> x ;
    cout << static_cast<int>(x) <<endl; // print x as an integer
}