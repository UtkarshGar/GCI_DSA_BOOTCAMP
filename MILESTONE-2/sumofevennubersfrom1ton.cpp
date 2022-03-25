#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"Sum all even numbers till: ";
    cin>>n;
    i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum+=i;
        }
     i++;
    }
    cout<<"Sum of all even numbers from 1 to "<<n<<" = "<<sum;
}