#include<iostream>
using namespace std;
int main()
{
    int length,breadth;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;
    if(length==breadth)
      cout<<"Square";
      else
      cout<<"Rectangle";
      return 0;
}