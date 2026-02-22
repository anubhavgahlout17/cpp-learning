#include<iostream>
using namespace std;

int main(){
    int n,i = 1;
    cout<<"Enter no: ";
    cin>>n;
    cout<<"While Loop: "<<endl;
    // (While loop)
    while (i<=n)
    {
        cout<<i<<endl;
        i++;
    }
    cout<<endl;

    //(Do while Loop)
    cout<<"do While Loop: "<<endl;
    i = 1;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=n);
     cout<<endl;

    //(For Loop)
    cout<<"For Loop: "<<endl;
    for ( i = 1; i <= n; i++)
    {
        cout<<i<<endl;
    }
    
    
    return 0;
    
}