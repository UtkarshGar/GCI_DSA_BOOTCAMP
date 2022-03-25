#include<iostream>
using namespace std;
int main(){
     int num,product=1;
     cout<<"Enter a number:";
     cin>>num;
     while(num!=0)
 {    product*=num%10;
      num=num/10;
 }
  cout<<"Product of digits of entered number is "<<product;
return 0;
}
