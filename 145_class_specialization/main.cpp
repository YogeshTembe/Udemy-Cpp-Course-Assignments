#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class prettyPrinter{
    private:
        T *data;
    public:
        prettyPrinter(T *data):data{data}{

        }
        void Print(){
            cout<<"{"<<*data<<"}"<<endl;
        }
};

template<>
void prettyPrinter<vector<vector<int>>>::Print(){
    for(auto v:*data){
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int *a=new int(5);
    prettyPrinter p{a};
    p.Print();
    vector<vector<int>> vec={{1,2,3},{4,5,6}};
    prettyPrinter p2{&vec};
    p2.Print();
    return 0;
}