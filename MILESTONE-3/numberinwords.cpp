#include<iostream>
using namespace std;
int main(){
     int num=0,n;
      cout<<"Enter a number:";
     cin>>n;
     while(n!=0)
     {
         num=(num*10)+(n%10);
         n/=10;
     }
     while(num!=0)
     { switch(num%10)
         {
             case 0:
             cout<<"ZERO ";
             break;
             case 1:
             cout<<"ONE ";
             break;
             case 2:
             cout<<"TWO ";
             break;
             case 3:
             cout<<"THREE ";
             break;
             case 4:
             cout<<"FOUR ";
             break;
             case 5:
             cout<<"FIVE ";
             break;
             case 6:
             cout<<"SIX ";
             break;
             case 7:
             cout<<"SEVEN ";
             break;
             case 8:
             cout<<"EIGHT ";
             break;
             case 9:
             cout<<"NINE ";
             break;    
         }
    num=num/10;
    }
     return 0;
}