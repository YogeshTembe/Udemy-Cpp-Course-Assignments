#include <iostream>
using namespace std;

int Add(int *a, int *b) ;    //Add two numbers and return the sum
void AddVal(int *a, int *b, int *result); //Add two numbers and return the sum through the third pointer argument
void Swap(int *a, int *b) ;  //Swap the value of two integers
void Factorial(int *a, int *result);       //Generate the factorial of a number and return that through the second pointer argument


int main(){
    int a=2;
    int b=5;
    int sum;
    cout<<Add(&a,&b)<<endl;
    AddVal(&a,&b,&sum);
    cout<<(sum)<<endl;
    Swap(&a,&b);
    cout<<"swap-"<<a<<" "<<b<<endl;

    int result;
    Factorial(&a,&result);
    cout<<"factorial-"<<result<<endl;
    return 0;
}

int Add(int *a, int *b){
    return *a+(*b);
}

void AddVal(int *a, int *b, int *result){
    int sum=*a+(*b);
    cout<<sum<<endl;
    *result=sum;
}

void Swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void Factorial(int *a, int *result){
    int res=1;
    for(int i=2;i<=*a;i++){
        res=res*i;
    }
    *result=res;
}