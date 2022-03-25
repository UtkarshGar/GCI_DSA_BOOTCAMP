#include<iostream>
using namespace std;
int main(){
    long long num;
    int count=0;
    cout<<"Enter any number: ";
    cin>>num;
    do
    {
        count++;
        num/=10;
    }while(num!=0);
    cout<<"Total digits: "<<count;
}
