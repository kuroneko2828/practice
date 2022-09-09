#include <iostream>
#include "data.h"

using namespace std;

int main(){
    Data d;
    d.init();
    d.setNumber(100);
    d.setComment("Programming c++");
    cout << d.getNumber() << endl << d.getComment() << endl;
}