#include<iostream>

using namespace std;

int main(){

char proceed;
do{

cout<<"MENU"<<endl;

cout<<"1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulus"<<endl;

int choice;
cout<<"Enter your choice(1-5):";
cin>>choice;
cout<<endl;

int num1;
int num2;
int result;

cout<<"Enter integer number 1:";
cin>>num1;
cout<<endl;

cout<<"Enter integer number 2:";
cin>>num2;
cout<<endl;



  if(choice==1){
    result=num1+num2;
    cout<<"Result: "<<result<<endl;
    }

   else if(choice==2){
    result=num1-num2;
    cout<<"Result: "<<result<<endl;
    }


    else if(choice==3){
    result=num1*num2;
    cout<<"Result: "<<result<<endl;
  }

    else if(choice==4){
            if (num2==0){
                cout<<"The second integer is zero,divide by zero "<<endl;
    } else{
    result=num1/num2;
    cout<<"Result: "<<result<<endl;}
    }

   else if(choice==5){
    result=num1%num2;
    cout<<"Result: "<<result<<endl;
  }

  else{
    cout<<"invalid input"<<endl;}

    cout<<"Press y or Y to continue: ";
    cin>>proceed;
    cout<<endl;

}while(proceed=='y'||proceed=='Y');

return 0;

}