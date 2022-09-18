#include<iostream>
#include "./nationalPark/nationalPark.h"
#include "./nationalPark/nationalPark.cpp"
using namespace std;

Duck getSound(){
    return Duck("xyz");
}

int main(){
    // Duck tom=getSound();
    // Duck jerry(getSound());
    // cout<<tom.makeSound()<<endl;
    Duck whitey("whwh");
    NationalPark sgnp(whitey);
    NationalPark yeor=sgnp;
    cout<<yeor.makeSound()<<endl;
}