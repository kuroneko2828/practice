#include <iostream>

using namespace std;

class Airplane{
    public:
        void fly();
};

void Airplane::fly(){
    cout << "fly" << endl;
}

class Fighter : public Airplane{
    public:
        void fight();
};

void Fighter::fight(){
    cout << "fight" << endl;
}

int main(){
    Fighter f;
    Airplane a;
    a.fly();
    f.fly();
    f.fight();
    return 0;
}