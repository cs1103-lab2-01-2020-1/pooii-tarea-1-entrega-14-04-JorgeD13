
#include "Vector.h"

Vector::Vector() : capacity(10) , size(0){
    V = new int[capacity];
}

Vector::Vector(int n) : size(0) {
    capacity = n;
    V = new int[capacity];
}

Vector::Vector(const Vector& vector) {
    size = vector.size;
    this->capacity = vector.capacity;
    V = vector.V;
}

Vector::~Vector() {
    delete[] V;
    V = nullptr;
}


int& Vector::operator[](int n) {
    return V[n];
}


void Vector::push_back(int n) {
    if (size + 1 > capacity){
        capacity*=2;
        int* aux =new int[capacity];
        for (int i=0; i<size; i++){
            aux[i]=V[i];
        }
        delete[] V;
        V = aux;
        delete[] aux;
        V[size]=n;
    }
    else V[size]=n;
    size++;
}


void Vector::pop_back(int n) {
    int* aux = new int[size];
    for (int i=0; i<=size-1;i++){
        aux[i]=V[i];
    }
    delete [] V;
    V = aux;
    delete[] aux;
    size--;
}

void Vector::insert(int ind, int n) {
    int i = 0, j = 0;
    this->size++;
    if (this->size+1 > this->capacity)
        this->capacity*=2;
    int* aux = new int[this->capacity];
    while(i<this->size) {
        if (i != ind)
            aux[i++] = this->V[j++];
        else
            aux[i++] = n;
    }
    delete[] this->V;
    this->V = aux;
    delete[] aux;
}
void Vector::erase(int ind) {
    int i= 0, j = 0;
    this->size--;
    int* aux = new int[this->capacity];
    while(j<=this->size){
        if(i != ind)
            aux[i++]=this->V[j++];
        else {
            aux[i++] = this->V[j+1];
            j += 2;
        }
    }
    delete[] this->V;
    this->V=aux;
    delete[] aux;
}

Vector Vector::operator+(Vector &vector) {
    int j=0;
    Vector sum(this->capacity + vector.capacity);
    for(int i = 0; i < this->size+vector.size; i++) {
        if (i < this->capacity)
            sum[i] = this->V[i];
        else {
            sum[i] = vector.V[j++];
        }
    }
    return sum;
}

Vector Vector::operator=(Vector &a) {

    return Vector(5);
}
