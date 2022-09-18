#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a=4;
    int b=12;
    //T Max(T, T); //Return largest element
    auto max=[](auto a, auto b){
        return a>b?a:b;
    };
    cout<<max(a,b)<<endl;
    //bool Greater(T, T) ; //Return true if first argument is greater than the second
    auto greater=[](auto a,auto b){
        return a>b;
    };
    cout<<greater(b,a)<<endl;
    //bool Less(T, T) ; //Return true if first argument is less than the second
    auto less=[](auto a,auto b){
        return a<b;
    };
    cout<<less(a,b)<<endl;
    //pair<T,T> MinMax(ItrBegin, ItrEnd) ;//Accept iterators of any container and return the largest and smallest element from that container.
    vector<int>nums{1,5,8,3};
    auto minmax=[](auto itbegin,auto itrend){
        //typename decltype(itbegin)::value_type min, max;
        auto max=*itbegin;
        auto min=*itbegin;
        for(auto it = itbegin; it != itrend; ++it) {
            //std::cout << *it << "\n";
            if(*it>max){
                max=*it;
            }
            if(*it<min){
                min=*it;
            }
        }
        cout<<max<<" "<<min<<endl;
        cout<<typeid(max).name()<<endl;
        return std::make_pair(min, max);
    };

    auto res=minmax(nums.begin(),nums.end());
    cout<<res.first<<" "<<res.second;
    return 0;
}