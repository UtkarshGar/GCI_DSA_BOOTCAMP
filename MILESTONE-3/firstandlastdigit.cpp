#include<iostream>
using namespace std;
int main(){
     int num,lastdigit,firstdigit;
     cout<<"Enter a number:";
     cin>>num;
     lastdigit=num%10;
     firstdigit=num;
     while(firstdigit>=10)
 {    firstdigit=firstdigit/10;
}
cout<<"First digit: "<<firstdigit<<endl;
cout<<"Last digit: "<<lastdigit;
return 0;
}
