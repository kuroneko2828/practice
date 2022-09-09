#include <iostream>

using namespace std;

class Car{
    public:
        Car();
        ~Car();
        void move();
        void supply(int fuel);
    private:
        int m_fuel;
        int m_migrate;
};

Car::Car() : m_fuel(0), m_migrate(0){
    cout << "generate" << endl;
}

Car::~Car(){
    cout << "destroy" << endl;
}

void Car::move(){
    if (m_fuel >= 0){
        m_migrate ++;
        m_fuel--;
    }
    cout << m_migrate << endl;
    cout << m_fuel << endl;
}

void Car::supply(int fuel){
    if (fuel > 0){
        m_fuel += fuel;
    }
    cout << "fule:" << fuel << endl;
}

int main(){
    Car c;
    c.supply(10);
    c.move();
    c.move();
    return 0;
}