#ifndef TREEEXCEPTIONS_H_
#define TREEEXCEPTIONS_H_

class Exception:public std::exception
{
    public:
    virtual ~Exception(){};
};

class TreeException:public Exception
{
    public:
    virtual ~TreeException(){};
};

 class valExists:public TreeException
{
    public:
    const char* what() const noexcept override
    {
        return "value already exists in the tree";
    }
    ~valExists()=default;
};

class valDoesntExist:public TreeException
{
    public:
    const char* what() const noexcept override
    {
        return "value doesnt exist in the tree";
    }
    ~valDoesntExist() = default;
};
#endif