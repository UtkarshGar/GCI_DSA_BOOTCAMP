#include<iostream>
using namespace std;
int main()
{
    int quantity;
    cout<<"Enter quantity: ";
    cin>>quantity;
    if(quantity>1000)
      cout<<"discount of 10% and total cost is "<<(quantity*100)-(0.1*quantity*100);
      else
      cout<<"no discount and total cost is "<<(quantity*100);
      return 0;
}