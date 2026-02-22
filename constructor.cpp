#include<iostream>          // Use of Constructor
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

};

int main(){
    employee e1("Anubhav Constructor",101,45000);
    
    cout<<"Name: "<<e1.name<<endl;
    cout<<"Id: "<<e1.id<<endl;
    cout<<"float: "<<e1.salary<<endl;
    

    

    return 0;
    
}