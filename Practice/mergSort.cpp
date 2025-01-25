#include<bits/stdc++.h>
using namespace std;
           
void mergeSort(int arr[],int left, int right){
       int mid = (left+right)/2;

       mergeSort(arr,left,mid);
       mergeSort(arr,mid+1,right);
lll
       merge();
}
 
int main(){
    int arr[] = {6,5,7,2,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,5);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}