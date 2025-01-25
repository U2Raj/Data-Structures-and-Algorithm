#include<iostream>
using namespace std;

int main(){
     int n,r,rev=0,rem;
     cin>>n;
     while(n!=0){
        r=n%2;
        n=n/2;
        cout<<r;
     }
     while(r!=0){
      rem = r%10;
      rev = rev*10 + rem;
      r/=10;
      }
      cout<<rev;
    return 0;
}