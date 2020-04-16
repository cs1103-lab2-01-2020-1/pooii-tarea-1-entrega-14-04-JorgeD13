#include "Number.h"
#include <cmath>

template<typename T>
number<T>::number() = default;


template<typename T>
number<T>::number(T n) : value(n) {}


template<typename T>
number<T>::number(const number &p) {
    this->value=p.value; }


template<typename T>
number<T>::~number() = default;


template<typename T>
T number<T>::operator=(const number &n) {
    this->value=n.value;
    return *this;
}

template<typename T>
T number<T>::operator+(T q) {
    return this->value + q;
}

template<typename T>
T number<T>::operator+=(T q) {
    return this->value=this->value + q;
}

template<typename T>
T number<T>::operator-(T q) {
    return this->value - q;
}

template<typename T>
T number<T>::operator-=(T q) {
    return this->value = this->value - q;
}

template<typename T>
T number<T>::operator*(T q) {
    return this->value*q;
}

template<typename T>
T number<T>::operator*=(T q) {
    return this->value=this->value*q;
}

template<typename T>
T number<T>::operator/(T q) {
    return this->value / q;
}

template<typename T>
T number<T>::operator^(T q) {
    return pow(this->value, q);
}

template<typename T>
number<T>::operator T() {
    return static_cast<T>(this->value);
}

template<typename T>
bool number<T>::operator<(T q) {
    return this->value < q;
}

template<typename T>
bool number<T>::operator<=(T q) {
    return this->value < q | this->value == q;
}

template<typename T>
bool number<T>::operator>(T q) {
    return this->value > q;
}

template<typename T>
bool number<T>::operator>=(T q) {
    return this->value < q | this->value == q;
}

template<typename T>
bool number<T>::operator!=(T q) {
    return this->value != q;
}

template<typename T>
bool number<T>::operator==(T q) {
    return this->value == q;
}


template<typename t>
std::ostream &operator<<(std::ostream &os, const number<t> &p) {
    os << p.value;
    return os;
}


template<typename t>
std::istream &operator>>(std::istream &is, number<t> &p) {
    is >> p.value;
    return is;
}

