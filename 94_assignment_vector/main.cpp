#include<iostream>
#include<string>
#include <ctype.h>
#include<vector>

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
 
std::vector<int> Find(
 const std::string &source,         //Source string to be searched
 const std::string &search_string,  //The string to search for
 Case searchCase = Case::INSENSITIVE,//Choose case sensitive/insensitive search
 size_t offset = 0 ) {                //Start the search from this offset
     //Implementation
 
     /*
     return position of the first character 
     of the substring, else std::string::npos
     */
    std::vector<int> res;
    std::string s1=source;
    std::string s2=search_string;
    if(searchCase==Case::INSENSITIVE){
        s1=ToUpper(source);
        s2=ToUpper(search_string);
    }
    size_t pos=s1.find(s2,offset);
    while(pos!=std::string::npos){
        res.push_back(pos);
        //std::cout<<pos<<std::endl;
        pos=s1.find(s2,offset+pos+1);
    }
    return res;
}

int main(){
    std::string s="hELlolololl";
    std::string sub="l";
    std::cout<<ToUpper(s)<<std::endl;
    std::cout<<ToLower(s)<<std::endl;
    auto vec=Find(s,sub,Case::SENSITIVE,0);
    for(auto a:vec){
        std::cout<<a<<" ";
    }
    return 0;
}