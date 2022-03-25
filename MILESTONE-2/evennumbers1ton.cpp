#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Print all even numbers till: ";
    cin>>n;
    cout<<"All even numbers from i to "<<n<<" are :"<<endl;
    i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
     i++;
    }
}
