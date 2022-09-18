#include<iostream>
using namespace std;

int main(){
    int test=8;
    int test2=4;
    auto fn=[=]()mutable{
        test++;
        cout<<"here-"<<test<<endl;
        cout<<"test2-"<<test2<<endl;
    };
    
    fn();
    return 0;
}