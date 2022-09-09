#include <iostream>

using namespace std;

class Function{
    public:
        static int max(int n1, int n2);
        static int min(int n1, int n2);

};

int Function::max(int n1, int n2){
    if(n1 > n2){
        return n1;
    }
    return n2;
}

int Function::min(int n1, int n2){
    if (n1 < n2){
        return n1;
    }
    return n2;
}

int main(){
    int m = 3, n = 1;
    cout << "max" << Function::max(m, n) << endl;
    cout << "min" << Function::min(m, n) << endl;
    return 0;
}
