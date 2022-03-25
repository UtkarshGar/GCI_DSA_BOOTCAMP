#include<iostream>
using namespace std;
int main(){
    float classesheld,classesattend,percent;
    cout<<"Enter classes held: ";
    cin>>classesheld;
    cout<<"Enter classes attended:";
    cin>>classesattend;
    percent=(classesattend/classesheld)*100;
    if (percent<75)
    cout<<"student not allowed to sit in exam as percentage is "<<percent<<" which is less than 75";
    else
    cout<<"student allowed to sit in exam and percentage of classes attended is "<<percent;
    return 0;
}