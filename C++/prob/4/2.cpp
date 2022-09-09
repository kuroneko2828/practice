#include <iostream>

using namespace std;

class Hoge{
    public:
        Hoge();
        ~Hoge();
        void foo();
};

void Hoge::foo(){
    cout << "foo" << endl;
}

Hoge::Hoge(){
    cout <<"constractor" << endl;
}
Hoge :: ~Hoge(){
    cout << "deconstractor" << endl;
}

int main(){
    Hoge *ph;
    ph = new Hoge;
    ph -> foo();
    delete ph;
    return 0;
}