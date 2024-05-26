#include <iostream>
using namespace std;
 int main(){
char startvalue;
char choiceagain;
float onlineshopping(void);
int totalamount;
startlevel:
cout<<"Please press s to start Shopping"<<endl;
start:
cin>>startvalue;
if(startvalue=='s' || startvalue=='S'){
 float totalAmount=onlineshopping();
cout<<"Total billamount"<<totalamount;
shopagain:
cout<<"do you want shoping again , y or n"<<endl;
cin>>choiceagain;
if(choiceagain=='y' || choiceagain=='Y'){
  goto startlevel;
}
else if(choiceagain=='n' || choiceagain=='N'){ 
cout<<"Thanks for shopping"<<endl;
} 
else{
 cout<<"You have entered wrong option, please type again"<<endl;
goto shopagain;
}
}
else{
cout<<"You have entered wrong option, please s"<<endl; goto start;
}
 float onlineshopping(){
char choice;
char item;
floar billamount=0;
cout<<"*** *********welcome to online shopping***"<<endl;
 cout<<". ---Please follow the instructions"<<endl;
cout<<"(1) Please enter a to order mobile phones"<<endl;
 cout<<"(2) Please enter 1 to order laptops"<<endl;
cout<<"(3) Please enter d to order desktops"<<endl; 
cout<<"(4) Please enter s to order speaker"<<endl;
 cout<<"(5) Please enter h to order Headphone"<<endl;
cin>>choice;



if(choice=='m'|| choice=='M'){
mobilelevel:

cout<<"Mobile details"<<endl;

cout<<"(1) Apple -> Price: 40000"<<endl;

cout<<"(2) Vivo => Price : 25000"<<endl; 

cout<<"(3) Oppo=> Price: 20000"<<endl;

cout<<"(4) Redmi => Price : 18000"<<endl;

cout<<"(5) Realme cout<<=> Price : 170000"<<endl;

cout<<"(6) Samsung -> Price : 25000"<<endl;

cout<<"Please enter your choice"<<endl; 
cin>>item;
if(item =='1'){
    cout<<"Enter quantity"<<endl;
    cin>>
    billamount=billamout + quantity*40000;
}
else if(item=='2'){
 cout<<"Enter quantity"<<endl;
cin>>quantity;

billAmount= billAmount quantity*20000;
}
else if(item=='2'){
 cout<<"Enter quantity"<<endl;
cin>>quantity;

billAmount= billAmount quantity*18000;
}
else if(item=='2'){
 cout<<"Enter quantity"<<endl;
cin>>quantity;

billAmount= billAmount quantity*17000;
}
else if(item=='2'){
 cout<<"Enter quantity"<<endl;
cin>>quantity;

billAmount= billAmount quantity*25000;
}
else if(item=='2'){
 cout<<"Enter quantity"<<endl;
cin>>quantity;

billAmount= billAmount quantity*25000;
}
else if(item=='2'){
 cout<<"Enter quantity"<<endl;
cin>>quantity;

billAmount= billAmount quantity*25000;
}
else{
 cout<<"You have entered wrong option, please type again"<<endl;
 goto mobilelevel;
}
}
return billamount;

 }