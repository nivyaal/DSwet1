#ifndef ARRAY_H_
#define ARRAY_H_
#include <iostream>

template <class T>
class Array
{
    private:
    int size;
    T* data;

    public:
    explicit Array(const int array_size):size(array_size), data(new T[array_size]){};

    explicit Array(const int array_size,const T& intial):size(array_size), data(new T[array_size])
    {
        for (int i=0;i<array_size;i++)
        {
            data[i]=intial;
        }
    };

    ~Array()
    {
        delete[] data;
    };
    int getSize() const {return size;};
    T& operator[](
        const int index) ;
    const T& operator[](const int index) const;
};

template <class T>
T& Array<T>::operator[](const int index)
{
    if (index<0 || index>size || data==nullptr)
    {
        throw ;//
    }
    else
    {
        return data[index];
    }

}

template <class T>
const T& Array<T>::operator[](const int index) const
{
    if (index<0 || index>size || data==nullptr)
    {
        throw ;//
    }
    else
    {
        return data[index];
    }
}
#endif