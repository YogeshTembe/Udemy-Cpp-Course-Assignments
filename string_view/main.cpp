#include <iostream>
#include <string_view>
using namespace std;
using namespace string_view_literals;

int main(){
    std::string s1="Hello";
    std::string_view sv=s1;
    std::string_view sv2="jacknsdondon";
    std::string_view sv3=sv2.substr(0,3);
    auto sv4="alono\0don"sv;
    cout<<sv<<endl;
    cout<<sv2<<endl;
    cout<<sv3.data()<<" "<<sv3<<endl;
    cout<<sv4.data()<<" "<<sv4<<endl;
    return 0;
}