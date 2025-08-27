#include <bits/stdc++.h>
using namespace std;

// Hashing
// int main(){
//     // input and array input
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     // precompute
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]+=1;
//     }

//     // input of test
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         cout<<hash[number]<<endl;
//     }
//     return 0;
// }

// storing string

// int main()
// {

//     // input string
//     string str;
//     cin >> str;

//     // precompute
//     int hash[25] = {0};
//     for(int i=0;i<str.length();i++){
//         hash[str[i]-'a']++;
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         char c;
//         cin >> c;
//         cout<<hash[c-'a']<<endl;
//     }

//     return 0;
// }


// map

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     // pre-compute
//     map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }

//     // iterate
//     for(auto it :mpp){
//         cout<<it.first<<"->"<<it.second<<endl;
//     }


//     // find numbers input
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         cout<<mpp[number]<<endl;
//     }
//     return 0;
// }





