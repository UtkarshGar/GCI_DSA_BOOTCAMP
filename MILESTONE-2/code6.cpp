#include <iostream>
using namespace std;
int main()
{
    int age1,age2,age3;
    cout<<" Enter age 1:";
    cin>>age1;
    cout<<" Enter age 2:";
    cin>>age2;
    cout<<" Enter age 3:";
    cin>>age3;
    if(age1>age2 && age1>age3)
    {cout<<"oldest: "<<age1;
     if (age2>age3)
      cout<<"Youngest: "<<age3;
     else 
     cout<<"Youngest : "<<age2;}

     else if(age2>age1 && age2>age3)
     {cout<<"Oldest: "<<age2;
     if (age1>age3)
      cout<<"Youngest: "<<age3;
     else 
     cout<<"Youngest : "<<age1;}

     else if(age3>age2 && age3>age1)
    {cout<<"Oldest: "<<age3;
     if (age2>age1)
      cout<<"Youngest: "<<age1;
     else 
     cout<<"Youngest : "<<age2;
     }}