#include<bits/stdc++.h>
using namespace std;

// bool palidromeRec(string str, int start,int end){
//     if(start>=end)
//        return true;

//     return (str[start]==str[end]) && palidromeRec(str, start+1, end-1);
// }

// int main()
// {
//   string str;
//   cin>>str;
//   int n = str.length();
  
//   cout<<palidromeRec(str, 0, n-1);
//   return 0;
// }

int palindrome(string s){
  bool flag=true;
  for(int i=0; i<s.length();i++){
            if(s[i]!=s[s.length()-1-i])
            cout<<"Not Palindorome";
            flag=false;
  }
  if(flag==true){
    cout<<"Palindrome";
  }
  return 0;
}

int main(){
  string s;
  cin>>s;

  cout<<palindrome(s);
  return 0;
}