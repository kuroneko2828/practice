#include <iostream>

using namespace std;

class Counter{
    private:
        int m_count;
        static int m_totalCount;
    public:
    Counter();
        void reset();
        void count();
        int getCount();
        static int getTotalCount();
};

int Counter::m_totalCount = 0;

Counter::Counter(){
    m_count = 0;
}

void Counter::reset(){
    m_totalCount -= m_count;
    m_count = 0;
}

void Counter::count(){
    m_count ++;
    m_totalCount ++;
}

int Counter::getCount(){
    return m_count;
}

int Counter::getTotalCount(){
    return m_totalCount;
}

int main(){
    Counter c1, c2;
    c1.count();
    c2.count();
    c2.count();
    c2.reset();
    c1.count();
    c1.count();
    c2.count();
    cout<<c1.getCount()<<endl;
    cout << c2.getCount() << endl;
    cout << Counter::getTotalCount() << endl;
    return 0;
}