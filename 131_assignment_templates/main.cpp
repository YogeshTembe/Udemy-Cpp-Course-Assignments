#include<iostream>
using namespace std;

// int Add(int x,int y){
//     return x+y;
// }

template<typename T>
T Add(T x,T y){
    return x+y;
}

// int ArraySum(const int *pArr, size_t arrSize){
//     int sum=0;
//     for(int i=0;i<arrSize;i++){
//         sum+=pArr[i];
//     }
//     return sum;
// }

template<typename T1>
T1 ArraySum(const T1 *pArr,size_t arrSize){
    T1 sum;
    for(int i=0;i<arrSize;i++){
        sum+=pArr[i];
    }
    return sum;
}

// int Max(const int *pArr, size_t arrSize){
//     int max;
//     for(int i=0;i<arrSize;i++){
//         if(pArr[i]>max){
//             max=pArr[i];
//         }
//     }
//     return max;
// }

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

// std::pair<int,int> MinMax(const int *pArr, size_t arrSize){
//     int min=INT_MAX;
//     int max=INT_MIN;
//     for(int i=0;i<arrSize;i++){
//         if(pArr[i]<min){
//             min=pArr[i];
//         }
//         if(pArr[i]>max){
//             max=pArr[i];
//         }
//     }
//     return pair<int,int>{min,max};
// }

template<typename T3>
std::pair<T3,T3> MinMax(const T3 *pArr, size_t arrSize){
    T3 min=pArr[0];
    T3 max=pArr[0];
    for(int i=0;i<arrSize;i++){
        if(pArr[i]<min){
            min=pArr[i];
        }
        if(pArr[i]>max){
            max=pArr[i];
        }
    }
    return pair<T3,T3>{min,max};
}


int main(){
    // cout<<Add(2,3)<<endl;
    // cout<<Add(3.0f,3.4f)<<endl;
    // cout<<Add(string("ab"),string("rt"))<<endl;

    // int arr[]={1,2,3,4};
    // cout<<ArraySum(arr,4)<<endl;
    // float arr2[]={1.0f,2.0f,1.2f};
    // cout<<ArraySum(arr2,3)<<endl;
    // string arr3[]={"a","b","c","d"};
    // cout<<ArraySum(arr3,4)<<endl;

    // int arr[]={1,2,3,4,34};
    // cout<<Max(arr,5)<<endl;
    // float arr2[]={1.0f,2.0f,1.2f};
    // cout<<Max(arr2,3)<<endl;
    // string arr3[]={"a","bdef","c","d"};
    // cout<<Max(arr3,4)<<endl;

    int arr[]={2,3,4,34};
    pair<int,int>res= MinMax(arr,4);
    cout<<res.first<<" "<<res.second<<endl;
    float arr2[]={1.0f,2.0f,1.2f};
    pair<float,float>res2=MinMax(arr2,3);
    cout<<res2.first<<" "<<res2.second<<endl;
    string arr3[]={"a","f","c","d"};
    pair<string,string>res3=MinMax(arr3,4);
    cout<<res3.first<<" "<<res3.second<<endl;

    return 0;
}