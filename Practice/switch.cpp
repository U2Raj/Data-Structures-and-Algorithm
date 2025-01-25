#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Enter desired Button : "<<endl;
    cin>>button;
      switch(button)
      {
          case 'a':
          cout<<"Hello"<<endl;
          break;
          case 'b':
          cout<<"Pranam"<<endl;
          break;
          case 'c':
          cout<<"Radhe Radhe"<<endl;
          break;
          case 'd':
          cout<<"Hemlo"<<endl;
          break;
          default:
           cout<<"I don't Know"<<endl;
           break;
      }
    return 0;
}