#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"Print sum of all natural numbers from 1 to : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"Sum  of all naturals numbers from 1 to "<<n<<" = "<<sum;
}

