#include<bits/stdc++.h>
using namespace std;

// int LCM(int a, int b){
//     int res = max(a,b);
//     while(true){
//         if(res%a==0 && res%b==0){
//             return res;
//         }
//         res++;
//     }
//     return res;

// }

int gcd(int a, int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}

int EuclidLCM(int a, int b){
    return (a*b)/gcd(a,b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    // cout<<LCM(a,b);
    cout<<EuclidLCM(a,b);
  return 0;
}