#include <memory>

template <typename T>

class Vectors {
public:
    typedef T* iterator;
    typedef const T* const_iterator;
    typedef size_t size_type;
    typedef T value_type;
    typedef T& adress;
    typedef const T& const_adress;

    Vectors() { create(); } // default constructor
    Vectors(T* arr);
    explicit Vectors(size_type n, const T& val = T{}); // explict
    Vectors(const Vectors& v) { create(v.begin(), v.end()); } // copy
    Vectors(Vectors<T>::iterator begin, Vectors<T>::iterator end) {create(begin, end); }
    ~Vectors(){ destroy(); } // destructor

    size_type size() const {return limit - data; }
    size_type realsize() const;
    inline T& operator[](size_type i) {return data[i]; }
    inline T& operator[](size_type i) const {return data[i]; }
    inline iterator begin() { return data; }
    inline const_iterator begin() const { return data; }
    inline iterator end() { return &data[realsize()]; }
    inline const_iterator end() const {return &data[realsize()]; }

    // functions
    Vectors<T>& operator=(const Vectors<T>& v);
    void push_back(const_adress val);
    T at(size_type t);

private:
    iterator data;
    iterator limit;
    iterator avail;

    size_type actualsize;

    std::allocator<T> alloc;

    void create();
    void create(size_type, const T&);
    void create(const_iterator, const_iterator);
    void destroy();
    void grow();
    void append(const_adress val);
};