#include<iostream>
#include<string>
#include <ctype.h>

std::string ToUpper(const std::string &str){
    std::string res=str;
    for (int i = 0; i < res.length(); i++)
  	{
  		res[i] = toupper(str[i]);
  	}
    return res;
}
std::string ToLower(const std::string &str){
    std::string res=str;
    for (int i = 0; i < res.length(); i++)
  	{
  		res[i] = tolower(str[i]);
  	}
    return res;
}

int main(){
    std::string s="hELlo";
    std::cout<<ToUpper(s)<<std::endl;
    std::cout<<ToLower(s)<<std::endl;
    return 0;
}