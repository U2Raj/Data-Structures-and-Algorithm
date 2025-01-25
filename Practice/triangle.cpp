#include<iostream>
using namespace std;
           
// * * * * *
// * * * *
// * * *
// * *
// *
 
// int main(){
//     int n;
//     cin>>n;
//  for(int i=n; i>0;i--){
//     for(int j=0;j<i;j++){
//     cout<<"*"<<" ";
//     }
//     cout<<endl;
//  }                                                                 

// return 0;
// }


// * 
// * *
// * * *
// * * * * 

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n;i++){
//        for(int j=0;j<i;j++){
//         cout<<"*"<<" ";
//        }
//        cout<<endl;
//     }

//     return 0;

// }

//        *
//      * *
//    * * *
//  * * * *

// int main(){

//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 1
// 12
// 123
// 1234
// 12345

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//          for(int j=1;j<=i;j++){
//                cout<<j<<" ";
//          }
//          cout<<endl;
//     }
// }
      
// 1
// 10
// 101
// 1010
// 10101

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=i;j++){
//              if(j%2==0){
//                 cout<<"0"<<" ";
//              }
//             else {
//              cout<<"1"<<" ";
//              }
//         }
//         cout<<endl;
//     }
// }


// 1
// 23
// 456
// 78910

int main(){
    int n;
    cin>>n;
    int y=1;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            cout<<y<<" ";
            y++;
        }
        cout<<endl;
    }
}  