#include<bits/stdc++.h>
using namespace std;

// int HCF(int a, int b){
//     int res = min(a,b);
//     int i;
//     for( i=res; i>0;i-- ){
//         if(a%i==0 && b%i==0){
//             break;
//         }
//     }
//     return i;
// }

int Euclidean(int a, int b){
    if(b==0){
        return a;
    }
    else
        return Euclidean(b,a%b);
}

int main()
{int a,b;
cin>>a>>b;
// cout<<HCF(a,b);
cout<<Euclidean(a,b);
  return 0;
}