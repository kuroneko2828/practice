#include <iostream>

using namespace std;

class Object{
    private:
        static int m_objectNum;
    public:
        static int get_objectNum();
        Object();
        ~Object();
};

int Object::m_objectNum = 0;

Object::Object(){
    m_objectNum ++;
}

Object::~Object(){
    m_objectNum --;
}

int Object::get_objectNum(){
    return m_objectNum;
}

int main(){
    Object *o1, *o2, *o3;
    o1 = new Object;
    o2 = new Object;
    o3 = new Object;
    cout << Object::get_objectNum()<< endl;
    delete o3;
    cout << Object::get_objectNum() << endl;
    delete o2;
    delete o1;
    return 0;
}