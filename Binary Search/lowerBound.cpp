#include<bits/stdc++.h>
using namespace std;
           
int lowerBound(vector<int> arr, int x){
    int n= arr.size();
    int low=0, high=n-1;
    int res=-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>=x){
            res = mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return res;
}
int upperBound(vector<int> arr, int x){
    int n= arr.size();
    int low=0, high=n-1;
    int res=-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>x){
            res = mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return res;
}
int main(){
 vector<int> arr = {1,2,3,4,5,5,5,5,6,7,8,9,10};
 cout<<lowerBound(arr, 5)<<" ";
 cout<<upperBound(arr, 5);
return 0;
}

/*
we have inbuilt function for the same -


upper_bound(arr.begin(), arr.end(), x);       
// Finds the first position where a value greater than 'x' appears in the sorted 'arr'.
// Returns an iterator pointing to that position.

upper_bound(arr.begin(), arr.end(), x) - arr.begin();   
// Converts the iterator returned by upper_bound() into an index (position in the array).
// This gives the index of the first element greater than 'x'.

and same for lower_bound.

upper_bound(arr.begin(), arr.end(), x) - lower_bound(arr.begin(), arr.end(), x);
//This gives the frequence of x
*/
