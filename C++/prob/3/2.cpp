#include <iostream>
#include "twostraing.h"

using namespace std;

int main(){
    TwoString s;
    s.setString1("Hello");
    s.setString2("World");
    cout << s.getString1() << endl;
    cout << s.getString2() << endl;
    cout << s.getConnectedString() << endl;
    cout << s.getConnectedLength() << endl;
}