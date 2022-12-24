#include<iostream>
using namespace std;
int main(){
int acceleration,initialvelo,finalvelo;
int time;
cout<<"Enter initial velocity of car:";
cin>>initialvelo;
cout<<"Enter acceleration of car :";
cin>>acceleration;
cout<<"Enter time :";
cin>>time;
finalvelo=(acceleration*time)+initialvelo;
cout<<"Final velocity of car :"<<finalvelo;
return 0;
}