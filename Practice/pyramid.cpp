#include<iostream>
#include <string>
using namespace std;
int main(){
     int i, n;
     cin>>n;
     string star="*";
     cout<<star<<endl;
    for(i=1;i<n;i++){
        star =  " *" + star+"*";
        cout<<star<<endl;
    }

    return 0;
}