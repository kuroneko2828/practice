#include <iostream>

using namespace std;

int main(){
    string s;
    s = "This is a";
    s.append(" pen.");
    cout << s << endl;
    cout << s.length() << endl;
    printf("char*:%s\n", s.c_str());
    return 0;
}