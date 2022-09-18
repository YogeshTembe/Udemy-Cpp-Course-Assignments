#include<iostream>
#include<filesystem>
#include<fstream>
#include<string>

int main(){
    int num{1234};
    std::ofstream output{"binary", std::ios::binary | std::ios::out};
    output.write((const char*)&num,sizeof(num));
    output.close();

    int num2=0;
    std::ifstream input{"binary", std::ios::binary | std::ios::in};
    input.read((char *)&num2,sizeof(num2));
    input.close();
    std::cout<<num2<<std::endl;
}