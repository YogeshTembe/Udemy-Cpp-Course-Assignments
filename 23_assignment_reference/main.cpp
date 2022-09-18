#include <iostream>
using namespace std;

void Add(int a,int b, int &result) ;    //Add two numbers and return the result through a reference parameter
void Factorial(int a, int &result) ;    //Find factorial of a number and return that through a reference parameter
void Swap(int &a, int &b) ;            //Swap two numbers through reference arguments

int main(){
    int a=3;
    int b=6;
    int c;
    Add(a,b,c);
    cout<<c<<endl;
    Factorial(a,c);
    cout<<c<<endl;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}

void Add(int a,int b, int &result){
    result=a+b;
}

void Factorial(int a, int &result){
    int res=1;
    for(int i=2;i<=a;i++){
        res=res*i;
    }
    result=res;
}

void Swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
