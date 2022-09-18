#include <iostream>
#include <thread>
#include <mutex>
#include <list>
using namespace std;

list<int> list1;
std::mutex mutex1;

void test1(){
    mutex1.lock();
    cout<<"in test1"<<endl;
    for(int i=0;i<5000;i++){
        //cout<<"test1 is called"<<endl;
        list1.push_back(i);
    }
    mutex1.unlock();
}

void test2(){
    mutex1.lock();
    cout<<"in test2"<<endl;
    for(int i=0;i<5000;i++){
        //cout<<"test2 is called"<<endl;
        list1.push_back(i);
    }
    mutex1.unlock();
}

int main(){
    cout<<"main start"<<endl;
    std::thread thread1(test1);
    std::thread thread2(test2);
    if(thread2.joinable()){
        cout<<"before thread2 join call"<<endl;
        thread2.join();
        cout<<"after thread2 join call"<<endl;
    }
    cout<<"in between"<<endl;
    if(thread1.joinable()){
        cout<<"before thread1 join call"<<endl;
        thread1.join();
        cout<<"after thread1 join call"<<endl;
    }
    cout<<list1.size()<<endl;
    cout<<"main end"<<endl;
    return 0;
}