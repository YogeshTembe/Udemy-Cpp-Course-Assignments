#include<iostream>
using namespace std;

class Employee{
    private:
        string Name;
        int Id;
        int Salary;
    public:
        Employee(string Name,int Id,int Salary){
            cout<<"Employee()"<<Name<<" "<<Id<<" "<<Salary<<endl;
        }

};

class Contact{
    private:
        string name;
        double phonenumber;
        string address;
        string email;
    public:
        Contact(string name, double phonenumber,string address,string email){
            cout<<"Contact()"<<name<<" "<<phonenumber<<" "<<address<<" "<<email<<endl;
        }
};

template<typename T>
T *CreateObject(){
    return new T();
}

template<typename T, typename... Params>
T *CreateObject(Params... args){
    return new T(args...);
}

int main(){
    int *p1 = CreateObject<int>(5) ;
 
    std::string *s = CreateObject<std::string>() ;//Default construction
    
    Employee * emp = CreateObject<Employee>(
    "Bob",    //Name
    101,      //Id
    1000) ;   //Salary
    
    Contact *p = CreateObject<Contact>(
    "Joey",                //Name
    987654321,             //Phone number
    "Boulevard Road, Sgr", //Address
    "joey@poash.com") ;    //Email
    return 0;
}

/*

Let's do it in steps. First, I'll create a simple function that creates instance of Integer class and can initialize it with some arguments.

Integer * Create(int arg){
    return new Integer{arg} ;
}
But this will work only with Integer class. So, let's use a template type instead of Integer, so that it can create instance of any class.

template<typename T>
T * Create(int arg){
    return new T{arg} ;
}
This is better. However, the argument type can be only int. So, let's use a template type for arguments as well.

template<typename T, typename Arg>
T * Create(const Arg& arg){
    return new T{arg} ;
}
Now, we're close to the most flexible implementation, but not quite there. This function can create instance of any class with any type of argument. But, what if the constructor of the type does not accept any argument? Or accepts more than 1 argument?

To allow this, we'll use variadic template for the arguments.

template<typename T, typename...Args>
T * Create(const Args&...args){
    return new T{args} ;
}
Almost finished. Now, we can create instance of any class with any number of arguments. We can improve it further by forwarding the arguments into the constructor of the type that we're constructing. So, the final implementation can be

template<typename T, typename...Args>
T * Create(Args&&...args){
    return new T{std::forward<Args>(args)...} ;
}
This is close to make_unique implementation.

Let's use this function to create instance of different types.

auto p = Create<Integer>(1) ;
auto p = Create<Integer>() ;//Works with default constructor
auto p = Create<Point>(1,2) ; //works with Point class that has 2 argument constructor

*/