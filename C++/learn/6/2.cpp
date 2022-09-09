#include <iostream>

using namespace std;

class Vector2D{
    protected:
        int m_x;
        int m_y;
    public:
        Vector2D();
        void setValue(int x, int y);
        int getX();
        int getY();
    protected:
        void init();
};

Vector2D::Vector2D(){
    init();
}

void Vector2D::setValue(int x, int y){
    m_x = x;
    m_y = y;
}

int Vector2D::getX(){
    return m_x;
}

int Vector2D::getY(){
    return m_y;
}

void Vector2D::init(){
    m_x = 0;
    m_y = 0;
}

class Position2D : public Vector2D{
    public:
        void resetPosition();
        void move(int dx, int dy);
};

void Position2D::resetPosition(){
    init();
}

void Position2D::move(int dx, int dy){
    m_x += dx;
    m_y += dy;
}

int main(){
    Position2D p;
    p.setValue(1,1);
    p.move(2,3);
    cout << p.getX() << "," << p.getY() << endl;
    p.resetPosition();
    cout << p.getX() << "," << p.getY() << endl;
    return 0;
}