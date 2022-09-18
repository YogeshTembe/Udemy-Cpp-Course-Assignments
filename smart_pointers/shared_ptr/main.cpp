//A company has projects 
//Each project has multiple employees working on it
//project class will contain list/array of employees who are wokring on a project
//employee class will contain pointer to a project on which he/she iw working

//same implementation with sharing unique pointer
#include <string>
#include <iostream>
#include <memory>

class Project{
    std::string m_Name;
    public:
        void SetName(const std::string &name){
            m_Name=name;
        }
        void ShowProjectDetails(){
            std::cout<<"Project Name-"<<m_Name<<std::endl;
        }
};

class Employee{
    //Project *m_Project{};
    std::shared_ptr<Project> m_Project{};
    public:
        void SetProject(const std::shared_ptr<Project> &prj){//we make it const to make sure its not manipulated within the function
            //m_Project=prj;
            m_Project=prj;//copying in shared_ptr is allowed
        }
        const std::shared_ptr<Project> &GetProject()const{
            return m_Project;
        }
};

void showInfo(const std::shared_ptr<Employee> &emp){
    std::cout<<"Employee project info-";
    emp->GetProject()->ShowProjectDetails();
}

int main(){
    std::shared_ptr<Project> prj{new Project{}};
    prj->SetName("Video decoder");
    std::shared_ptr<Employee> e1{new Employee{}};
    e1->SetProject(prj);
    std::shared_ptr<Employee> e2{new Employee{}};
    e2->SetProject(prj);//this program gives compilation error because in first SetProject for e1 we are moving unique_ptr so here prj is nullptr 
    std::shared_ptr<Employee> e3{new Employee{}};
    e3->SetProject(prj);
    prj.reset();
    showInfo(e1);
    showInfo(e2);
    prj->ShowProjectDetails();  //shared_ptr keeps track of all the copies! it maintains a reference count and its shared with all the copies 

    std::cout<<"Reference count-"<<prj.use_count()<<std::endl;//use_count() shows the reference count in shared_ptr


    //manual memory management
    // delete prj;
    // delete e1;
    // delete e2;
    // delete e3;
}