#include<iostream>
#include "./Integer/Integer.cpp"
using namespace std;

class Employee{
    public:
        string m_Name;
        Integer m_id;

        // Employee(const string &name,const Integer &id):m_Name{name},m_id{id}{
        //     cout<<"Employee(const string &name,const Integer &id)"<<endl;
        // }

        // Employee(string &&name,Integer &&id):m_Name{name},m_id{std::move(id)}{
        //     cout<<"Employee(string &&name,Integer &&id)"<<endl;
        // }
        template<typename T1,typename T2>
        Employee(T1 &&name,T2 &&id):m_Name{std::forward<T1>(name)},m_id{std::forward<T2>(id)}{
            cout<<"template called"<<endl;
        }
};

int main(){
    Employee e1{"umo",Integer{23}};
    // string name="xyz";
    // Integer id{2};
    // Employee e2{name,id};
    //Employee e3{name,45};
    //Employee e4{"lki",id};
    return 0;
}