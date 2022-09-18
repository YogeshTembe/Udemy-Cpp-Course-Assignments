#include <iostream>
#include <memory>

class Printer{
    std::shared_ptr<int> m_pValue{};
    public:
        void SetValue(std::shared_ptr<int> p){
            m_pValue=p;
        }
        void Print(){
            //we want some mechanism to know if the pointer value m_pValue is nullptr or not 
            //shared_ptr cannot be used here because it will not delete pointer it will just decrement reference count
            //so we can use weak_ptr for this purpose
            std::cout<<"Value is-"<<*m_pValue<<std::endl;
        }
};

int main(){
    Printer prn;
    int num{};
    std::cin>>num;
    std::shared_ptr<int> p{new int{num}};
    prn.SetValue(p);
    if(*p>10){
        p=nullptr;//we can also call p.reset() here the reference count is decremented by 1 and underlying pointer is not deleted i.e. underlying memory is not released
        //the underlying memory will be released at the end of program or when prn object is destroyed
    }
    prn.Print();
    return 0;
}