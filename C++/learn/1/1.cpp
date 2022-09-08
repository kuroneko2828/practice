#include <iostream>
#include <string>

using namespace std;

int _main(){
    cout << "Hello, World" << endl;
    //std :: cout << "Hello, World" << std :: endl;
    return 0;
}

int _main2(){
    int a;
    cin >> a;
    cout << "a=" << a << endl;
    return 0;
}

int main(){
    string s, t;
    t = "入力された文字は、";
    cout << "文字列を入力";
    cin >> s;
    cout << t+s << "です。" << endl;
    return 0;
}
