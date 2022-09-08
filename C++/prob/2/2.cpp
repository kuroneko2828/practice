#include <iostream>
#include "minmax.h"

using namespace std;

int main(){
    MinMax m;
    int a = 4;
    int b = 2;
    int c = 3;
    cout << m.max(a,b,c) << endl;
    cout << m.min(a, b,c)<< endl;

    return 0;
}