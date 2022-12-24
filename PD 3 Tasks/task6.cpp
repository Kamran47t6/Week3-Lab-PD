#include<iostream>
using namespace std;
int main(){
int size,cost,area,cost_per_pound,area_per_square;
cout<<"The size of fertilizer bag in pounds :";
cin>>size;
cout<<"The cost of bag :";
cin>>cost;
cout<<"The area in square feet that can be covered by bag ";
cin>>area;
cost_per_pound=cost/size;
cout<<"Cost of fertilizer per pound :"<<cost_per_pound<<endl;
area_per_square=cost/area;
cout<<"Cost of fertilizing the area per square feet :"<<area_per_square;
return 0;
}