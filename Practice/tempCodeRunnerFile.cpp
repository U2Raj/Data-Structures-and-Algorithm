#include<iostream>
using namespace std;
           
//printing names 5 times

// int cnt=5;
// void print(){
//      if(cnt<=0)
//      return;

//      cout<<cnt<<". Umang"<<endl;
//      cnt--;
//      print();
// }

 void print(int i,int n){
      if(i>n)
      return;

      cout<<i<<endl;
      print(i+1,n);
 }

int main(){