#include<iostream>
using namespace std;

int main(){
    int a = 89;
    int const b = 85;  // value not changed (constant)
    float c = 78;
    float const d = 74.22;    // value not changed (constant)
    double e = 87.356;
    long double f = 74.698;
     
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of b is: "<<b<<endl;
    cout<<"Value of c is: "<<c<<endl;
    cout<<"Value of d is: "<<d<<endl;
    cout<<"Value of e is: "<<e<<endl;
    cout<<"Value of f is: "<<f<<endl;
     
    return 0;

}