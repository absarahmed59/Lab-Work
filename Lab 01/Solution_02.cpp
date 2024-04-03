#include <iostream>
using namespace std;

class Person{
    private:
        int Age;
        string Name, Occupation;
        bool Male, Cook;
    public:
        void setName(string s){
            Name = s;
        }
        void setAge(int n){
            Age = n;
        }
        void setOccupation(string s){
            Occupation = s;
        }
        void setMale(bool b){
            Male = b;
        }
        void setCook(bool b){
            Cook = b;
        }
        string getName(){
            return Name;
        }
        int getAge(){
            return Age;
        }
        string getOccupation(){
            return Occupation;
        }
        bool isMale(){
            return Male;
        }
        bool isFemale(){
            return !(Male);
        }
        bool canCook(){
            return Cook;
        }
};

void personInfo(Person p){
    int age;
    string occupation, name;
    bool cook, male;
    
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Occupation: ";
    cin>>occupation;
    cout<<"Can you Cook: [1/0] ";
    cin>>cook;
    cout<<"Are you Male: [1/0] ";
    cin>>male;

    p.setName(name);
    p.setAge(age);
    p.setOccupation(occupation);
    p.setMale(male);
    p.setCook(cook);

    cout<<endl<<endl<<"Person Information"<<endl;
    cout<<"Name: "<<p.getName()<<endl;
    cout<<"Age: "<<p.getAge()<<endl;
    cout<<"Occupation: "<<p.getOccupation()<<endl;
    cout<<"Is Male: "<<p.isMale()<<endl;
    cout<<"Is Female: "<<p.isFemale()<<endl;
    cout<<"Can Cook: "<<p.canCook()<<endl<<endl<<endl;
}

int main(){
    Person p1, p2;
    personInfo(p1);
    personInfo(p2);

    return 0;
}