#include <iostream>
#include <future>
#include <unistd.h>

using namespace std;

int test(int count){
    for(int i=0;i<count;i++){
        cout<<"*";
        sleep(1);//sleeps for 3 second
    }
    cout<<endl;
    return count;
}

int main(){
    cout<<"main thread"<<endl;
    int count=5;
    std::future<int> res=std::async(std::launch::deferred,test,count);
    cout<<"here after async"<<endl;
    for(int i=0;i<count;i++){
        cout<<".";
        sleep(1);//sleeps for 3 second
    }
    if(res.valid()){
        cout<<"validity check done"<<endl;
        auto num=res.get();
        cout<<"num-"<<num<<endl;
    }
    return 0;
}