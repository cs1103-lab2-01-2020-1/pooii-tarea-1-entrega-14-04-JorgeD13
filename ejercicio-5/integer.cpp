#include "integer.h"
#include <cmath>

integer::integer()= default;


integer::integer(int _value){
    value=_value;
}


integer::integer(const integer& other) : value(other.value) {}


integer::~integer() = default;



integer integer::operator=(const integer &other) {
    if(this!=&other){
        if(other.value!=0)this->value=other.value;
    }
    return *this;
}


integer integer::operator+(int n){
    integer aux(n);
    return integer(this->value + aux.value);
}


integer integer::operator+=(int n) {
    this->value=this->value+n;
    return *this;
}


integer integer::operator-(int n) {
    return this->value-n;
}


integer integer::operator-=(int n) {
    this->value=this->value-n;
    return *this;
}


integer integer::operator*(int n) {
    return this->value*n;
}


integer integer::operator*=(int n) {
    this->value=this->value*n;
    return *this;
}


integer integer::operator/(int n) {
    return this->value/n;
}


bool integer::operator>(int n) {
    return this->value > n;
}


bool integer::operator<(int n) {
    return this->value < n;
}


bool integer::operator>=(int n) {
    return this->value > n | this->value == n;
}



bool integer::operator<=(int n) {
    return this->value < n | this->value == n;
}


bool integer::operator!=(int n) {
    return this->value != n;
}


bool integer::operator==(int n) {
    return this->value == n;
}


integer::operator int() {
    return static_cast<int>(this->value);
}


std::ostream &operator<<(std::ostream &os, const integer &p) {
    os << p.value;
    return os;
}


std::istream &operator>>(std::istream& is, integer& I) {
    is >> I.value;
    return is;
}


integer integer::operator^(int n) {
    return integer(pow(this->value, n));
}


