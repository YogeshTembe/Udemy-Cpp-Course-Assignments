
#include <iostream>
using namespace std;
#include "./car/car.cpp"

Car AddFuel(const Car &a,const Car &b){
    Car temp;
    temp.SetFuel(a.GetFuel() + b.GetFuel());
    return temp;
}

int main(){
    Car maruti(3),tesla(4);
    cout<<maruti.GetFuel()<<tesla.GetFuel()<<endl;
    tesla.SetFuel(AddFuel(maruti,tesla).GetFuel());
    auto suzu=maruti;
    cout<<suzu.GetFuel()<<endl;
    cout<<tesla.GetFuel();
    return 0;
}