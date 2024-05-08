// K-subarray with maximun sum

 #include<iostream>
 #include<bits/stdc++.h>
 #include<vector>
 using namespace std;

 long long kMaxSubarray(int n, int k, vector<int> &arr){
    long long maxi = INT_MIN;
     for(int i=0; i<n; i++){
        int j = i;
        long long s = 0;
        
        while(j<i+k && j<n){
           s+=arr[j];
           maxi = max(maxi, s);
           j++;
        }
     }
     return maxi;
 }

 int main(){
     
vector<int> a = {10, -3, 3, 9, 4};
cout<<kMaxSubarray(5, 4, a);


 }