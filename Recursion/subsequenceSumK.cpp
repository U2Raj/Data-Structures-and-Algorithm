#include <bits/stdc++.h>
using namespace std;

void printF(int idx, vector<int>& ds,int arr[], int sum, int n){
       if(idx==n){
        for(auto it: ds){
            cout<<it<<" ";
        }
        if(ds.empty()) cout<<"{}";
        cout<<endl;
        return;
       }

       ds.push_back(arr[idx]);
       sum+=arr[idx];
        printF(idx+1,ds,arr,sum,n);
        ds.pop_back();
        sum-=arr[idx];
        printF(idx+1,ds,arr,sum,n);
}
int main(){
     
     int arr[] = {3,1,2};
     int n = sizeof(arr)/sizeof(arr[0]);

     vector<int> ds;
     printF(0,ds,arr,0,n);

    return 0;
}