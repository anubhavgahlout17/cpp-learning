#include<iostream>             // Inheritance
using namespace std;
               
class employee{
    public:
    string name;
    int id;
    float salary;

    employee(string name, int id, float salary){
        this->name = name;
        this->id = id;
        this->salary = salary;
    }

    void Details(){             
    cout<<"Name: "<<this->name<<endl;
    cout<<"Id: "<<this->id<<endl;
    cout<<"float: "<<this->salary<<endl;


    }
};

class programmer : public employee{
       public:
       int error;

};

int main(){
    employee e1("Anubhav",101,45000);
    e1.Details();

}