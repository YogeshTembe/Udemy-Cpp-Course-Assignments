#include<iostream>
#include "./stack.h"

template<typename T,int size>
void stack<T,size>::Push(T element){
    m_buffer[++m_top]=element;
}


template<typename T,int size>
void stack<T,size>::Pop(){
    --m_top;
}


template<typename T,int size>
bool stack<T,size>::isEmpty(){
    return m_top==-1;
}


template<typename T,int size>
T stack<T,size>::Top(){
    return m_buffer[m_top];
}

template<typename T,int size>
stack<T,size>::stack(const stack<T,size> &obj){
    m_top=obj.m_top;
    for(int i=0;i<=obj.Top();i++){
        m_buffer[i]=obj.m_buffer[i];
    }
}