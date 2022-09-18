//A company has projects 
//Each project has multiple employees working on it
//project class will contain list/array of employees who are wokring on a project
//employee class will contain pointer to a project on which he/she iw working
#include <string>
#include <iostream>

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
    Project *m_Project{};
    public:
        void SetProject(Project *prj){
            m_Project=prj;
        }
        Project *GetProject()const{
            return m_Project;
        }
};

void showInfo(Employee *emp){
    std::cout<<"Employee project info-";
    emp->GetProject()->ShowProjectDetails();
}

int main(){
    Project *prj=new Project{};
    prj->SetName("Video decoder");
    Employee *e1=new Employee{};
    e1->SetProject(prj);
    Employee *e2=new Employee{};
    e2->SetProject(prj);
    Employee *e3=new Employee{};
    e3->SetProject(prj);
    showInfo(e1);
    showInfo(e2);
    prj->ShowProjectDetails();

    //manual memory management
    delete prj;
    delete e1;
    delete e2;
    delete e3;
}