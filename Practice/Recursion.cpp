#include <bits/stdc++.h>
using namespace std;

// printing names 5 times

// int cnt=5;
// void print(){
//      if(cnt<=0)
//      return;

//      cout<<cnt<<". Umang"<<endl;
//      cnt--;
//      print();
// }

// void print(int i, int n)
// {
//     if (i > n)
//         return;

//     cout << i << endl;
//     print(i + 1, n);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     print(1, n);
//     return 0;
// }

//************Print sum of N numbers********/

// int sum(int n, int res){
//     if(n<1){
//         return res;
//     }

//     return sum(n-1, n+res);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout<<sum(n,0);
//     return 0;
// }

//subsequence with sum k

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

