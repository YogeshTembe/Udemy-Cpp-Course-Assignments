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

enum class Case{SENSITIVE, INSENSITIVE};
 
size_t Find(
 const std::string &source,         //Source string to be searched
 const std::string &search_string,  //The string to search for
 Case searchCase = Case::INSENSITIVE,//Choose case sensitive/insensitive search
 size_t offset = 0 ) {                //Start the search from this offset
     //Implementation
 
     /*
     return position of the first character 
     of the substring, else std::string::npos
     */
    if(searchCase==Case::SENSITIVE){
        return source.find(search_string,offset);
    }
    std::string s1=ToLower(source);
    std::string s2=ToUpper(search_string);
    return s1.find(s2,offset);
}

int main(){
    std::string s="hELlo";
    std::string sub="l";
    std::cout<<ToUpper(s)<<std::endl;
    std::cout<<ToLower(s)<<std::endl;
    std::cout<<Find(s,sub,Case::INSENSITIVE,0);
    return 0;
}