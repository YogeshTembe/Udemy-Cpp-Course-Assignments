#include <iostream>
#include "./car/car.cpp"
using namespace std;

Car operator-(const Car &a,const Car &b){
    Car temp;
    *temp.fuel=*(a.fuel)-*(b.fuel);
    return temp;
}

std::ostream & operator <<(std::ostream & out, const Car &a){
    out<<a.GetFuel();
    return out;
}

std::istream & operator >>(std::istream & input, Car &a){
    int x;
    input>>x;
    a.SetFuel(x);
    return input;
}

int main(){
    Car maruti(4), tesla(3);
    Car ee=5;
    Car a=maruti+tesla;
    cout<<"addition1-"<<a.GetFuel()<<endl;
    const Car hero(3);
    Car mero(5);
    Car b=hero+mero;
    cout<<"addition2-"<<b.GetFuel()<<endl;
    Car c=maruti-tesla;
    cout<<"subtraction1-"<<c.GetFuel()<<endl; 
    const Car t1(5);
    const Car t2(2);
    Car d=t1-t2;
    cout<<"subtraction2-"<<d.GetFuel()<<endl;
    Car t3(5);
    auto t4=t3;
    cout<<"assignment-"<<t4.GetFuel()<<endl;
}