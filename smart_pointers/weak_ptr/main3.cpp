#include <iostream>
#include <memory>

class Printer{
    std::weak_ptr<int> m_pValue{};
    public:
        void SetValue(std::weak_ptr<int> p){
            m_pValue=p;
        }
        void Print(){
            if(m_pValue.expired()){
                std::cout<<"the resource is not available"<<std::endl;
                return;
            }
            std::shared_ptr<int> sh=m_pValue.lock();
            std::cout<<"Value is-"<<*sh<<std::endl;
        }
};

int main(){
    Printer prn;
    int num{};
    std::cin>>num;
    std::shared_ptr<int> p{new int{num}};
    prn.SetValue(p);
    if(*p>10){
        p=nullptr;
    }
    prn.Print();
    return 0;
}