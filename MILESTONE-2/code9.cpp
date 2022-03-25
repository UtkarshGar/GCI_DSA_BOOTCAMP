#include<iostream>
using namespace std;
int main(){
    float classesheld,classesattend,percent;
    char medicalcause;
    cout<<"Enter classes held: ";
    cin>>classesheld;
    cout<<"Enter classes attended:";
    cin>>classesattend;
    cout<<"Enter medical cause[Y/N]: ";
    cin>>medicalcause;
    percent=(classesattend/classesheld)*100;
    if(medicalcause=='Y')
     cout<< "Student allowed to sit in exam";
     else 
    if (percent<75)
    cout<<"student not allowed to sit in exam ";
    else
    cout<<"student allowed to sit in exam and percentage of classes attended is "<<percent;
    return 0;
}