#include <iostream>

class Printer{
    int *m_pValue{0};
    public:
        void SetValue(int *p){
            m_pValue=p;
        }
        void Print(){
            std::cout<<"Value is-"<<*m_pValue<<std::endl;
        }
};

int main(){
    Printer prn;
    int num{};
    std::cin>>num;
    int *p =new int{num};
    prn.SetValue(p);
    if(*p>10){
        delete p;
        p=nullptr;
    }
    prn.Print();
    delete p;
    return 0;
}