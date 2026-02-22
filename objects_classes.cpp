#include<iostream>          // Objectss & Classes
using namespace std;

class employee{
    public:
    string name;
    int id;
    float salary;

    void Details(){                     // other method for print details like (function call)
    cout<<"Name: "<<this->name<<endl;
    cout<<"Id: "<<this->id<<endl;
    cout<<"float: "<<this->salary<<endl;
   
    }
};

int main(){
    employee e1;
    e1.name = "Anubhav";
    e1.id = 101;
    e1.salary = 45000.00;
    
    cout<<"Name: "<<e1.name<<endl;
    cout<<"Id: "<<e1.id<<endl;
    cout<<"float: "<<e1.salary<<endl;
    cout<<endl;

    e1.Details();          //(function call)

    return 0;
    
}