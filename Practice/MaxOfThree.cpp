#include<iostream>
using namespace std;
int main()
{ int a, b, c;
   cout<<"Enter three Numbers :\n";
   cin>>a>>b>>c;
   if(a>b){
       if(a>c){
           cout<<a<<endl;
       }
       else{
           cout<<c<<endl;
       }
   }
   else{
       if(b>c){
           cout<<b<<endl;
       }
       else{
           cout<<c<<endl;
       }
   }
    return 0;
}