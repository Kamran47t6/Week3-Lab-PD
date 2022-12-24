#include<iostream>
using namespace std;
int main(){
string name;
float subject1,subject2,subject3,subject4,subject5;
float percentage;
cout<<"Enter name: ";
cin>>name;
cout<<"Enter subject 1 marks :";
cin>>subject1;
cout<<"Enter subject 2 marks :";
cin>>subject2;
cout<<"Enter subject 3 marks :";
cin>>subject3;
cout<<"Enter subject 4 marks :";
cin>>subject4;
cout<<"Enter subject 5 marks :";
cin>>subject5;
cout<<"You name : "<<name;
cout<<endl;
percentage=(subject1+subject2+subject3+subject4+subject5)/500*100;
cout<<"Your percentage marks :"<<percentage;
return 0;
}