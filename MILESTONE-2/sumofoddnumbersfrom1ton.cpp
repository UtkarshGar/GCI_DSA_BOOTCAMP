#include <iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter n :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0);
        else
        sum += i;
    }
    cout<<"Sum of all odd numbers from 1 to "<< n <<" = "<<sum;
}
