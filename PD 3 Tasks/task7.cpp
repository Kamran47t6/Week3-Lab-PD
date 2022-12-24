#include<iostream>
using namespace std;
int main(){
string name;
int adult_tickprice,child_tickprice,adult_sold,child_sold,percentage,total,remain;
cout<<"Enter movie name :";
cin>>name;
cout<<"Enter Adult ticket price :";
cin>>adult_tickprice;
cout<<"Enter child ticket price :";
cin>>child_tickprice;
cout<<"Enter number of adult ticket sold :";
cin>>adult_sold;
cout<<"Enter number of child ticket sold :";
cin>>child_sold;
cout<<"Enter percentage to donate: ";
cin>>percentage;
total=adult_sold*20+child_sold*10;
cout<<"Total amount generated :"<<total;
remain=total-(total/100*percentage);
cout<<endl;
cout<<"The remaining amount after donation :"<<remain;
return 0;
}