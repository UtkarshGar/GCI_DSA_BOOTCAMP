#include<iostream>
#include<math.h>
using namespace std;
int main(){
   int n,first,last,sum,digits,nn,a,b;
   cout<<"Enter any number:";
   cin>>n;
   cout<<"Original number = "<<n<<endl;
   digits=(int)log10(n);
   first=n/pow(10,digits);
   last = n%10;
   a = first * (pow(10,digits));
   b=n%a;
   n=b/10;
   nn= last* (pow(10,digits))+(n*10 +first);
cout<<"Number after swapping first and last digit = "<<nn;

}