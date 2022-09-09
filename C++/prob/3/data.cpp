#include "data.h"

void Data::init(){
    number = 0;
    comment = "";
}

void Data::setNumber(int n){
    number = n;
}

void Data::setComment(string s){
    comment = s;
}

int Data::getNumber(){
    return number;
}

string Data::getComment(){
    return comment;
}