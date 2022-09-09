#include <iostream>
#include <string>

using namespace std;

class TwoString{
    private:
        string m_string1;
        string m_string2;
    public:
        void setString1(string s);
        void setString2(string s);
        string getString1();
        string getString2();
        string getConnectedString();
        int getConnectedLength();
};