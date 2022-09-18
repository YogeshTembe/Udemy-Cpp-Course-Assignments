#include <iostream>
using namespace std;

int main(){
    float a=1.23;
    cout<<a;
    printf(" %u %u\n", sizeof(.67f), sizeof(.67));
    int x=10;
    int &ref=x;
    cout<<x<<" "<<ref<<endl;
    int y=20;
    ref=y;
    cout<<x<<" "<<ref<<endl;
    return 0;
}