//command to run - g++ -o main main.cpp Integer/Integer.cpp
//same implementation with unique pointer, if we are not sharing the pointer with other parts of the code then we will use unique_ptr
#include "./Integer/Integer.h"
#include <iostream>
#include <memory> //include this header file to use unique_ptr and shared_ptr

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

void store(std::unique_ptr<Integer> p){
    std::cout << "storing data into file-"<<p->GetValue()<<std::endl;
}

void store2(std::unique_ptr<Integer> &p){
    std::cout << "storing data into file-"<<p->GetValue()<<std::endl;
}

void Operate(int value){
    //Integer *p=GetInteger(value);
    //*************very imp- unique_ptr is a template so here p is not a pointer it is a object
    //we are able to use p like a pointer because few operators are overloaded in its template
    std::unique_ptr<Integer> p{GetInteger(value)}; // unique_ptr is a class template, unique_ptr has explicit constructor 
    //so we cannot use assignment to initialize it with assignment operator 
    if(p==nullptr){ //comparison operator is overloaded in unique_ptr
        //p=new Integer(value); once we create a instance of unique_ptr we cannot assign a new pointer to it using assignment operator
        p.reset(new Integer(value)); //this reset will delete the existing pointer and then it will take ownership of new pointer
    }
    display(p.get()); // to pass the pointer to a function that does not accept unique pointer, get() returns a underlying pointer
    p->SetValue(100); //arrow operator is overloaded in unique pointer
    display(p.get());
    //delete p; no need to call delete after display
    p=nullptr; //unique_ptr has overloaded assignment operator which accpets nullptr as second param, this impl deletes the underlying pointer and makes pointer variable null 
    // so this statement is equivalent to --> delete p; p=nullptr; 
    p.reset(new Integer());
    *p=__LINE__; //dereference operator is overloaded in the unique_ptr 
    display(p.get());
    //store(p); //this will not work it will throw compilation error saying attempting to reference deleted function i.e. copy constructor of unique pointer is deleted
    //store(std::move(p)); // we will move the pointer to store function i.e. it will giveup the ownership of the underlying pointer 
    //so we cannot access p after this statement, but we can resuse the unique_ptr by calling reset() on it

    //now lets say there is a case where you want to use unique pointer after passing it to a function then you can pass by reference rather than passing by value
    store2(p);
    //after this you will be able to  use unique ptr
    //delete p;
}
//with unique pointer we don't have to delete the pointer after usage, its automatically deleted to avoid memory leak
int main(){
    Integer a(3);
    std::cout<<"a value"<<std::endl;
    Operate(4);
    return 0;
}