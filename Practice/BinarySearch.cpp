#include<bits/stdc++.h>
using namespace std;


//by using loop and if else statement

// int BinarySearch(int arr[], int x, int n){
//    int l=0, r= n-1;
//    int mid= (l+r)/2;
   
//    while(l<=r){

//    if(x>arr[mid])
//       l=mid++;
//    else if(x== arr[mid])
//       return mid;   
//    else if(x< arr[mid])
//       r=mid--;   
//    }

//    return -1;
// }



//First Occurence

int BinarySearch(int arr[], int x, int n){
   int l=0, r= n-1;
   int mid= (l+r)/2;
   
   while(l<=r){

   if(x>arr[mid])
      l=mid++;
   else if(mid==0 || arr[mid-1]!=arr[mid])
      return mid;   
   else if(x< arr[mid])
      r=mid--;   
   }



   return -1;
}

//by using recursion

// int BinarySearch(int arr[], int x, int n, int l, int r){
   
   
//    if(r>=l){
//     int mid= (l+r)/2;
//    if(x>arr[mid])
//       return (arr,x,n,mid++,r);
//    else if(x== arr[mid])
//       return mid;   
//    else if (x< arr[mid])
//      return (arr,x,n,l,mid--); 
//    }  
  
//   return -1;
// }

int main()
{
  int arr[]={10,20,30,40,40,40,50,60};
  int x;
  cout<<"Enter the number u want to search"<<endl;
  cin>>x;
  int n = sizeof(arr)/sizeof(arr[0]);
  int l=0, r= n-1;
  cout<<BinarySearch(arr, x, n);

  return 0;
}