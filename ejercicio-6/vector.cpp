#include "vector.h"

vector::vector() : capacity(10) , size(0){
    V = new int[capacity];
}

vector::vector(int n) : size(0) {
    capacity = n;
    V = new int[capacity];
}

vector::vector(const vector& vector) {
    size = vector.size;
    this->capacity = vector.capacity;
    V = vector.V;
}

vector::~vector() {
    delete[] V;
    V = nullptr;
}


int& vector::operator[](int n) {
    return V[n];
}


void vector::push_back(int n) {
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


void vector::pop_back(int n) {
    int* aux = new int[size];
    for (int i=0; i<=size-1;i++){
        aux[i]=V[i];
    }
    delete [] V;
    V = aux;
    delete[] aux;
    size--;
}

void vector::insert(int ind, int n) {
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
void vector::erase(int ind) {
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

vector vector::operator+(vector &vector) {
    int j=0;
    class vector sum(this->capacity + vector.capacity);
    for(int i = 0; i < this->size+vector.size; i++) {
        if (i < this->capacity)
            sum[i] = this->V[i];
        else {
            sum[i] = vector.V[j++];
        }
    }
    return sum;
}

vector vector::operator=(vector &a) {

    return vector(5);
}
