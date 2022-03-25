#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:";
    cin>>n;
    int i=n;
    cout<<"Natural numbers from "<<n<<"to"<<1<<endl;
    while(i>=1)
{
    cout<<i<<endl;
    i--;
}
return 0;
}