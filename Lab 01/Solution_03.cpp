#include<iostream>
using namespace std;

class Employee{
    private:
        string Name, Department, Position;
        int idNumber;
    public:
        Employee(){
            Name = "";
            Department = "";
            Position = "";
            idNumber = 0;
        }
        Employee(string n, string d, string p, int i)
        : Name(n),Department(d),Position(p),idNumber(i) {};
        void setIdNumber(int n){
            idNumber = n;
        }
        void setName(string s){
            Name = s;
        }
        void setDepartment(string s){
            Department = s;
        }
        void setPosition(string s){
            Position = s;
        }
        int getIdNumber(){
            return idNumber;
        }
        string getName(){
            return Name;
        }
        string getDepartment(){
            return Department;
        }
        string getPosition(){
            return Position;
        }
        ~Employee(){
            cout<<"I am Destructor"<<endl<<endl<<endl;
        }
};

void employeeInfo(Employee e){
    string s;
    int n;
    cout<<"Enter Name: ";
    cin>>s;
    e.setName(s);
    cout<<"Enter Department: ";
    cin>>s;
    e.setDepartment(s);
    cout<<"Enter Position: ";
    cin>>s;
    e.setPosition(s);
    cout<<"Enter ID Number: ";
    cin>>n;
    e.setIdNumber(n);


    cout<<endl<<"Employee Information"<<endl;
    cout<<"Name: "<<e.getName()<<endl;
    cout<<"ID Number: "<<e.getIdNumber()<<endl;
    cout<<"Department: "<<e.getDepartment()<<endl;
    cout<<"Position: "<<e.getPosition()<<endl;
}

int main(){
    Employee Waleed("Waleed Abbid", "Accounting", "Vice President", 47899);
    Employee Haidar("Haidar Ali", "IT", "Programmer", 39119);
    Employee Nouman("Nouman Khaliq", "Manufacturing", "Engineer", 81774);

    employeeInfo(Waleed);
    employeeInfo(Haidar);
    employeeInfo(Nouman);
    return 0;
}
