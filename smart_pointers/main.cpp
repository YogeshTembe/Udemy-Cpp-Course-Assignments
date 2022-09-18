//command to run - g++ -o main main.cpp Integer/Integer.cpp
#include "./Integer/Integer.h"
#include <iostream>

void display(Integer *p){
    if(!p){
        return;
    }
    std::cout<<"value-"<<p->GetValue()<<std::endl;
}

Integer *GetInteger(int v){
    Integer *p=new Integer(v);
    return p;
}

void Operate(int value){
    Integer *p=GetInteger(value);
    if(p==nullptr){
        p=new Integer(value);
    }
    display(p);
    p->SetValue(100);
    display(p);
    delete p;
    p=nullptr;
    p=new Integer();
    *p=__LINE__;
    display(p);
    delete p;
}

int main(){
    Integer a(3);
    std::cout<<"a value"<<std::endl;
    Operate(4);
    return 0;
}