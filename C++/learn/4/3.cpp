#include <iostream>

using namespace std;

int main(){
    int *p;
    p = new int;
    *p = 123;
    cout << *p << endl;
    delete p;
    return 0;
}