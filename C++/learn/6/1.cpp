#include <iostream>

using namespace std;

class Car{
    public:
        Car();
        virtual ~Car();
        void move();
        void supply(int fuel);
    private:
        int m_fuel;
        int m_migration;
};

Car::Car(){
    m_fuel = 0;
    m_migration = 0;
    cout << "generation" << endl;
}

Car::~Car(){
    cout << "destroy" << endl;
}

void Car::move(){
    if(m_fuel >= 0){
        m_migration ++;
        m_fuel--;
    }
    cout << "migration" << m_migration << endl;
    cout << "fuel" << m_fuel << endl;
}

void Car::supply(int fuel){
    if (fuel > 0){
        m_fuel += fuel;
    }
    cout << "fuel" << m_fuel << endl;
}

class Ambulance : public Car{
    public:
        Ambulance();
        virtual ~Ambulance();
        void savePeople();
    private:
        int m_number;
};

Ambulance::Ambulance(){
    m_number = 119;
    cout << "generation(A)" << endl;
}

Ambulance::~Ambulance(){
    cout << "delete(A)" << endl;
}

void Ambulance::savePeople(){
    cout << "call" << m_number << endl;
}

int main(){
    Car c;
    c.supply(10);
    c.move();
    c.move();
    Ambulance a;
    a.supply(10);
    a.move();
    a.savePeople();
    return 0;
}