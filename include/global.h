#ifndef GLOBAL
#define GLOBAL

template <class T>
class Comparable
{
public:
    Comparable() = default;
    ~Comparable() = default;
    virtual int CampareTo(Comparable &item) = 0;

public:
    T _data;
};

class element : protected Comparable<int>
{
    inline int CampareTo(Comparable &item) override
    {
        if (this->_data < item._data)
        {
            return -1;
        }
        else if (this->_data == item._data)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
};
using ElementType = element;

#endif /* GLOBAL */
