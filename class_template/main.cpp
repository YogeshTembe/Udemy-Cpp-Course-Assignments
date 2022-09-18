#include<iostream>
#include "stack/stack.cpp"
using namespace std;

int main(){
    stack<int,5>stack1;
    stack1.Push(3);
    stack1.Push(5);
    stack1.Push(23);
    auto stack2(stack1);
    while(!stack1.isEmpty()){
        cout<<stack1.Top()<<endl;
        stack1.Pop();
    }
    return 0;
}