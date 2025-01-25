#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Two Numbers :";
    cin>>a>>b;


cout<<"Enter 1 for Addition"<<endl;
cout<<"Enter 2 for Subtraction"<<endl;
cout<<"Enter 3 for Multiplication"<<endl;
cout<<"Enter 4 for Division"<<endl;

char Operation;
cout<<"Enter the Operations to be performed :"<<endl;
cin>>Operation;

switch(Operation){
    case '1':
    cout<<"Addition is : "<<a+b<<endl;
    break;

    case '2':
    cout<<"Subtraction is : "<<a-b<<endl;
    break;

    case '3':
    cout<<" Multiplication is : "<<a*b<<endl;
    break;

    case '4':
    cout<<"Division is : "<<a/b<<endl;
    break;

    default:
    cout<<"Not Valid in My System : "<<endl;
    break;
}

    return 0;
}