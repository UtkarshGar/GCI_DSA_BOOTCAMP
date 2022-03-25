#include<iostream>
using namespace std;
int main()
{
    int salary;
    float yearsofservice;
    cout<<"Input salary:";
    cin>>salary;
    cout<<"Years of service ";
    cin>>yearsofservice;
    if(yearsofservice>5)
     cout<<"Net salary amount :"<<salary+(salary*0.5);
    else
     cout<<" Not eligible for bonus";     
 
      return 0;
}