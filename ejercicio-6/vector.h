
class Vector {
    int* V;
    int capacity, size;
public:
    Vector();
    explicit Vector(int n);
    Vector(const Vector& vector);
    ~Vector();
    virtual void push_back(int n);
    virtual void pop_back(int n);
    virtual void insert(int ind, int n);
    virtual void erase(int ind);
    int& operator[](int n); //Usar para acceder a un elemento existente, no para crear uno, motivo:size
    Vector operator+(Vector& a);
    Vector operator=(const Vector& a);
};
