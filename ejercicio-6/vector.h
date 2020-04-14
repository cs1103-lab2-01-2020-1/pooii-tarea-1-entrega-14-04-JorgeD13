class vector {
    int* V;
    int capacity, size;
public:
    vector();
    explicit vector(int n);
    vector(const vector& vector);
    ~vector();
    virtual void push_back(int n);
    virtual void pop_back(int n);
    virtual void insert(int ind, int n);
    virtual void erase(int ind);
    int& operator[](int n); //Usar para acceder a un elemento existente, no para crear uno, motivo:size
    vector operator+(vector& a);
    vector operator=(vector& a);
};

