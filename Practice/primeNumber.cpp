#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int count=0;
    // for(int i=2; i < n ; i++){
    //     if(n%i==0){
    //         count++;
    //     }
    
    // }
    // if(count>0){
    //     cout<<"Not Prime";
    // }
    // else{
    //     cout<<" prime";
    // }

int n;
cin>>n;
int i;
for(i=2;i<n;i++){
    if(n%i==0){
        cout<<"Not Prime"<<endl;
        break;
    }
}
if(n==i){
    cout<<"prime"<<endl;
}
    return 0;
}