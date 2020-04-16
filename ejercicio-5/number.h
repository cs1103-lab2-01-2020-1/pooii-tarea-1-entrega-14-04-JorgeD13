#include <iostream>


template <typename T>
class number {
private:
    T value;
public:
    number();
    explicit number(T n);
    number(const number& p);
    ~number();
    T operator=(const number& n);
    T operator+(T q);
    T operator+=(T q);
    T operator-(T q);
    T operator-=(T q);
    T operator*(T q);
    T operator*=(T q);
    T operator/(T q);
    T operator^(T q);
    operator T();
    bool operator<(T q);
    bool operator<=(T q);
    bool operator>(T q);
    bool operator>=(T q);
    bool operator!=(T q);
    bool operator==(T q);
    template<typename t>
    friend std::ostream& operator <<(std::ostream& os, const number<t>&);

    template<typename t>
    friend std::istream& operator >>(std::istream& is, number<t>&);
};

