#include<bits/stdc++.h>
using namespace std;

// int factTrailZero(int n){
//     int res=0;
//    for(int i=5; i<=n;i=i*5){
//     res=res + n/i;
//    }
//    return res;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<factTrailZero(n);
//   return 0;
// }

//count  a digit
// int main(){
//   int n,count=0;
//   cin>>n;
  
//   while(n>0){
//     n=n/10;
//     count++;
//   }
//   cout<<count;
//   return 0;
// }


//reverse a number

int main(){
  int n;
  cin>>n;
   
   int res=0;
   while(n>0){
    int ld = n%10;
     res = res*10 + ld;
     n=n/10;
   }
   cout<<res;
  //  return 0;
}