#include <iostream>
#include <fstream>
#include <filesystem>

void copy(){
    std::ifstream input;
    input.open(R"(./text.txt)");
    std::string msg;

    std::ofstream output;
    output.open(R"(./res.txt)");
    
    while(!input.eof()){
        std::getline(input,msg);
        std::cout<<"msg-"<<msg<<std::endl;
        //std::cout<<input.eof()<<std::endl;
        output<<msg<<std::endl;
    } 
}

int main(){
    copy();
    return 0;
}