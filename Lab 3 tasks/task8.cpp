#include<iostream>
using namespace std;
int main(){
int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
int add,sub,div,mul,result;
cout<<"Enter first number: ";
cin>>num1;
cout<<"Enter second number: ";
cin>>num2;
cout<<"Enter third number: ";
cin>>num3;
cout<<"Enter fourth number: ";
cin>>num4;
cout<<"Enter fifth number: ";
cin>>num5;
cout<<"Enter sixth number: ";
cin>>num6;
cout<<"Enter seventh number: ";
cin>>num7;
cout<<"Enter Eigth number: ";
cin>>num8;
cout<<"Enter Nine number: ";
cin>>num9;
cout<<"Enter Ten number: ";
cin>>num10;
result=(num1+num2+num8+num9)+(num6-num5)+(num7/num3)+(num4*num10);
cout<<"Result is :"<<result;
return 0;
}