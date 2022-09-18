#include<iostream>

template<typename T,int size>
class stack{
    private:
        T m_buffer[size];
        int m_top{-1};
    public:
        stack()=default;
        stack(const stack &obj);
        void Push(T element);
        void Pop();
        bool isEmpty();
        T Top();
};