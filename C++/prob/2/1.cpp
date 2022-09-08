#include <iostream>
#include "keisan.h"

using namespace std;

int main(){
    Keisan k;
    k.a = 4;
    k.b = 3;
    cout << k.a+k.b << endl;
    cout << k.a-k.b << endl;
    return 0;
}