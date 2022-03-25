#include<iostream>
#define BASE 10
using namespace std;
int main(){
    long long num,n;
    int freq[BASE];
    int i,lastdigit;
     cout<<"Enter a number:";
     cin>>num;
     for(i=0;i<BASE;i++)
     {
         freq[i]=0;
     }
     n=num;
     while(n!=0)
 {    lastdigit=n%10;
      n/=10;
      freq[lastdigit]++;
 }
 for(i=0;i<BASE;i++)
 {
     cout<<"Frequency of "<<i<<"= "<<freq[i]<<endl;
 }
return 0;
}