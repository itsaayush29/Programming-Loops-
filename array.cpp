#include <iostream>
using namespace std;

int main() {
    int i,num[10] = {10,20,303,40,50,60,70,80,90,100};
    cout<<"Enter the value of i :";
    cin>>i;
    num[5]= {};

    while(i<10)
    {
    cout<<"THe number of  "<<i<<" is "<<num[i]<<endl;
    i++;

    }
return 0;
}