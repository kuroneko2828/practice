#include <iostream>

using namespace std;

class Number{
    private:
        int a;
        int b;
    public:
        Number();
        void setNumbers(int n1, int n2);
        int getAdd();
};

Number::Number(){
    a = 0;
    b = 0;
}


void Number::setNumbers(int n1, int n2){
    a = n1;
    b = n2;
}

int Number::getAdd(){
    return a+b;
}

int main(){
    Number *pn;
    pn = new Number;
    pn->setNumbers(1,2);
    cout << pn->getAdd() << endl;
    delete pn;
    return 0;
}