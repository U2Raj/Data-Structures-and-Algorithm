#include<bits/stdc++.h>
using namespace std;

int sumrec(int n){
         
        if(n==0)
        return 0;
         return sumrec(n/10)+n%10;
}
int main()
{
   int n;
   cin>>n;
   cout<<sumrec(n);

  return 0;
}