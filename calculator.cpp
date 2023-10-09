#include<iostream>
using namespace std;
int main(){
cout<<"=======Hey! user i am your calculator========="<<endl;
float num1,num2,result;
char ch;
cout<<"Enter the first number : ";
cin>>num1;
cout<<"Enter the second number : ";
cin>>num2;
cout<<"Choose the Operator: + - * / : ";
cin>>ch;
switch (ch){
case '+':
    result=num1+num2;
    cout<<"Addition of "<<num1<<" and "<<num2<<" is:"<<result;
    goto lable;
    break;
case '-':
    result=num1-num2;
    cout<<"Subtraction of "<<num1<<" and "<<num2<<" is:"<<result;
    goto lable;
    break;
case '*':
    result=num1*num2;
    cout<<"Multiplication of "<<num1<<" and "<<num2<<" is:"<<result;
    goto lable;
    break;
case '/':
    if(num2==0){
        cout<<num1<<" is not Divided by 0";
    }
    else{
        result=num1/num2;
        cout<<"Division of "<<num1<<" and "<<num2<<" is:"<<result;
        goto lable;
    }
    break;
lable:
    cout<<"\nThanks for using";
    break;
default:
    cout<<"\n You Entered wrong input";
}
}

