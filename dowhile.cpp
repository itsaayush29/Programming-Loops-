#include <iostream>
using namespace std;

int main() {
    int num,i=1;
    cout<<"Enter the number: ";
    cin>>num;
    do{
    cout<<num<<"*"<<i<<"="<<num*i<<"\n";
    i++;
    }
    while(i<=10);

    


        return 0;
}

