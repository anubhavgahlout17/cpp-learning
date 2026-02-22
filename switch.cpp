#include<iostream>
using namespace std;

int main(){
    int choice;
    cout<<"Enter 1 for Hii"<<endl;
    cout<<"Enter 2 for Bye"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Hii";
        break;
    case 2: 
        cout<<"Bye";
        break;
    
    default:
        cout<<"Invalid Choice";
        break;
    }
    return 0;
}