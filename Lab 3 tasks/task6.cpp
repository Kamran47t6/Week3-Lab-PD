#include<iostream>
using namespace std;
int main(){
string name;
float matric;
float intermediate;
float ecat;
float aggregate;
cout<<"Enter your name :";
cin>>name;
cout<<"Enter matric marks :";
cin>>matric;
cout<<"Enter Intermediate marks out of 550 :";
cin>>intermediate;
cout<<"Enter Ecat marks :";
cin>>ecat;
aggregate=(intermediate/550)*50 + (matric/1100)*40 + (ecat/400)*10;
cout<<"Your Aggregate is :"<<aggregate;
return 0;
}