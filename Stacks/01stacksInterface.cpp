template <class T> class stack
{
public:
    stack();                    // default construtor
    stack(const stack&);        // copy constructor
    ~stack();                   // deconstructor
    stack& operator=(const stack&);
    int size() const;
    bool empty() const;
    T& top();
    void push(const T&);
    void pop();
    // ...
}
