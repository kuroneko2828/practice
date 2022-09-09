#include <iostream>
#include "calculation.h"

using namespace std;

int main(){
    Calculation c;
    c.setNumber1(8);
    c.setNumber2(9);

    cout << c.getNumber1() << endl;
    cout << c.getNumber2() << endl;
    cout << c.add() << endl;
    cout << c.sub() << endl;
}