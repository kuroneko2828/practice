#include <iostream>
#include <string>
using namespace std;

class Data{
    private:
        int number;
        string comment;
    public:
        void init();
        void setNumber(int n);
        void setComment(string s);
        int getNumber();
        string getComment();
};