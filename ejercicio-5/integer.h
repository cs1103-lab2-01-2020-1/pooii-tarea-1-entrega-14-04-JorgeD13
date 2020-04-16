
#include <iostream>

class integer {
private:
    int value{};
public:
    integer(); //ya
    integer(int _value);
    integer(const integer& other);
    ~integer();
    integer operator=(const integer& other);
    integer operator+(int n);
    integer operator+=(int n);
    integer operator-(int n);
    integer operator-=(int n);
    integer operator*(int n);
    integer operator*=(int n);
    integer operator/(int n);
    bool operator>(int n);
    bool operator<(int n);
    bool operator>=(int n);
    bool operator<=(int n);
    bool operator!=(int n);
    bool operator==(int n);
    integer operator^(int n);
    operator int();
    friend std::ostream& operator <<(std::ostream& os, const integer&); //ya
    friend std::istream& operator >>(std::istream& is, integer&); //ya
};

