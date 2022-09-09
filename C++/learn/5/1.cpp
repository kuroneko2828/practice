#include <iostream>

using namespace std;

class Rat{
    public:
        Rat();
        ~Rat();
        static void showNum();
        void squeak();
    private:
        int m_id;
        static int m_count;
};

int Rat::m_count = 0;
Rat::Rat():m_id(0){
    m_id = m_count;
    m_count ++;
}

Rat::~Rat(){
    cout << "delete rat: " << m_id << endl;
    m_count --;
}

void Rat::showNum(){
    cout << "total: " << m_count << endl;
}

void Rat::squeak(){
    cout << m_id << ": tyu-" <<  endl;
}

int main(){
    Rat *r1, *r2, *r3;
    r1 = new Rat;
    r1 -> squeak();
    r2 = new Rat;
    r3 = new Rat;
    r2 -> squeak();
    r3 -> squeak();
    delete r1;
    delete r2;
    Rat::showNum();
    delete r3;
    Rat::showNum();
    return 0;
}
