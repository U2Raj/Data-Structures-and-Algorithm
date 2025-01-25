#include<bits/stdc++.h>
using namespace std;

void recsum(int n){
    if(n==0)
    return;
    // cout<<n<<" ";
    recsum(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
   recsum(n);
  return 0;
}