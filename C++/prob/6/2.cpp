#include <iostream>

using namespace std;

class FundCalc{
    protected:
        double m_number1;
        double m_number2;
    public:
        FundCalc();
        void setNumber1(double n);
        void setNumber2(double n);
        double getNumber1();
        double getNumber2();
        double add();
        double sub();
};

FundCalc::FundCalc():m_number1(0), m_number2(0){}

void FundCalc::setNumber1(double n){
    m_number1 = n;
}

void FundCalc::setNumber2(double n){
    m_number2 = n;
}

double FundCalc::getNumber1(){
    return m_number1;
}

double FundCalc::getNumber2(){
    return m_number2;
}

double FundCalc::add(){
    return m_number1+m_number2;
}

double FundCalc::sub(){
    return m_number1-m_number2;
}

class NewCalc:public FundCalc{
    public:
        double mul();
        double div();
};

double NewCalc::mul(){
    return m_number1*m_number2;
}

double NewCalc::div(){
    return m_number1/m_number2;
}

int main(){
    NewCalc n;
    n.setNumber1(10);
    n.setNumber2(2);
    cout << n.add() << endl;
    cout << n.sub() << endl;
    cout << n.mul() << endl;
    cout << n.div() << endl;
    return 0;
}