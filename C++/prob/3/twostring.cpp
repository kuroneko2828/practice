#include <string>
#include "twostraing.h"

void TwoString::setString1(string s){
    m_string1 = s;
}

void TwoString::setString2(string s){
    m_string2 = s;
}

string TwoString::getString1(){
    return m_string1;
}

string TwoString::getString2(){
    return m_string2;
}

string TwoString::getConnectedString(){
    return m_string1+m_string2;
}

int TwoString::getConnectedLength(){
    return (m_string1+m_string2).length();
}