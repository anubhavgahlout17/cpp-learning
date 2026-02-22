#include<iostream>                  //Arrays
using namespace std;

int main(){
    string student[3];   //string
    int marks[3];    
    cout<<"Enter Student details: "<<endl;
    for (int i = 0; i < 3; i++)
    {  
        cout<<"Student Name: ";
        cin>>student[i];
        cout<<"Student Marks: ";
        cin>>marks[i];
    }
    cout<<endl;
    cout<<"Student Info: ";
    for (int i = 0; i < 3; i++)
    {
        cout<<"Student Name: "<<student[i]<<endl;
        cout<<"Student Marks: "<<marks[i]<<endl;
    }
    return 0;
}