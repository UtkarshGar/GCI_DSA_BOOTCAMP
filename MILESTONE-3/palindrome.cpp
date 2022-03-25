#include<iostream>
using namespace std;
int main(){
     int num,reverse=0,remainder;
     cout<<"Enter a number:";
     cin>>num;
     while(num!=0)
 {    remainder=num%10;
      reverse=(reverse*10)+remainder;
      num/=10;
 }
  cout<<"Reverse of entered number is "<<reverse;
  if(reverse==num)
   cout<<num <<"is palindrome";
   else
   cout<<num <<"is not palindrome"
return 0;
}