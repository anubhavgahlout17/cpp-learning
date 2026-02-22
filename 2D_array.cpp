#include<iostream>                //2D array
using namespace std;

int main(){
    int arr[2][3] = {{25,45,10},{14,12,18}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"The value at "<<i<<","<<j<<" is: "<<arr[i][j]<<endl;
        }
        
    }
    return 0;
    

}