#include<iostream>
using namespace std;

template<typename T2>
T2 Max(const T2 *pArr, size_t arrSize){
    T2 max=pArr[0];
    for(int i=0;i<arrSize;i++){
        if(pArr[i]>max){
            max=pArr[i];
        }
    }
    return max;
}

template<> float Max(const float *arr, size_t arrSize){
    cout<<"sum of floats"<<endl;
    return 3.4f;
}

template<> char Max(const char *pArr, size_t arrSize){
    cout<<"special char called"<<endl;
    char max=pArr[0];
    for(int i=0;i<arrSize;i++){
        if(pArr[i]>max){
            max=pArr[i];
        }
    }
    return max;
}

template<> string Max(const string *pArr,size_t arrSize){
    cout<<"special string called"<<endl;
    string max=pArr[0];
    for(int i=0;i<arrSize;i++){
        if(pArr[i]>max){
            max=pArr[i];
        }
    }
    return max;
}

int main(){
    int arr[]={1,2,3,4};
    cout<<Max(arr,4)<<endl;
    float arr2[]={1.2f,1.0f,2.0f};
    cout<<Max(arr2,3)<<endl;

    string arr3[]={"a","b","c"};
    cout<<Max(arr3,3)<<endl;

    char arr4[]={'a','b','c'};
    cout<<Max(arr4,3)<<endl;
    return 0;
}