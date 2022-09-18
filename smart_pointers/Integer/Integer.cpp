#include "Integer.h"

Integer::Integer(){
    ptr=new int(0);
    std::cout<<"Integer()"<<std::endl;
}

Integer::Integer(int a){
    ptr=new int(a);
    std::cout<<"Integer(int a)"<<std::endl;
}

int Integer::GetValue(){
    return *ptr;
}

void Integer::SetValue(int a){
    *ptr=a;
}

Integer::~Integer(){
    std::cout<<"~Integer()"<<std::endl;
}


