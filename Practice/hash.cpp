#include<bits/stdc++.h>
using namespace std;
           
// int main(){

//   string s;
//   cin>>s;

// int hash[26]={0};
// for(int i=0; i<s.size();i++){
//     hash[s[i]-'a']++;
// }

//   int q;
//   cin>>q;
//   while(q--){
//     char c; 
//     cin>>c;
//     cout<<hash[c-'a'];
//   } 

// return 0;
// }


vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        
    }


int main(){
      int nums[] = {1,1,1,2,2,5};
      int k=2;
      cout<<topKFrequent(nums,k)<<endl;
    return 0;
}