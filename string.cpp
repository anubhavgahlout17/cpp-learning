#include <iostream>    // Strings
#include <string>
using namespace std;
int main()
{
    string name = "Anubhav";
    cout << "Name is: " << name<<endl;
    cout<< "Length of Name is: "<<name.length()<<endl;  // count length
    cout<<"The Name is: "<<name.substr(0,3)<<endl;
    cout<<"The Name is: "<<name.substr(2,7)<<endl;

    return 0;
}