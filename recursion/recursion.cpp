#include <bits/stdc++.h>
using namespace std;


// int cnt =0;
// void print(){
//     if(cnt==5) return;
//     cout<<cnt<<endl;
//     cnt++;
//     print();
// }

// int main() {
//     print();
//     return 0;
// }


// Q - Print names N number of times
// void f(int i,int n){
//     if(i>n) return;// Base condition
//     cout<<"Raj"<<endl;
//     i++;
//     f(i,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     f(1,5);
// }

//Q - Print linearly from 1 to N 
// void f(int i,int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     i++;
//     f(i,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     f(1,n);
// }
// Q - Print number in reverse
// void f(int i,int n){
//     if (i>n) return;
//     cout<<n<<endl;
//     n--;
//     f(i,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     f(1,n);
// }


// Q - not do 1 to N but in back tracking

// void f(int i,int n){
//     if(i<1) return;
//     f(i-1,n);
//     cout<<i<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     f(n,n);
//     return 0;
// }

// Q - Print N to 1 using back tracking
// homework



// sum of first n numbers
// parameterized
// void sum_N(int i,int sum){
//     if(0>i){
//         cout<<sum;
//         return;
//     };
//     sum_N(i-1,sum+i);
// }

// int main(){
//     int n;
//     cin>>n;
//     sum_N(n,0);
//     return 0;
// }

//functional

// int sum_N(int n){
//     if (n==0) {
//         return 0;
//     };
//     return n + sum_N(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<sum_N(n);
//     return 0;
// }

// factorial

// int factorial(int n){
//     if (n==1){
//         return 1;
//     };
//     return n *factorial(n-1);
// }


// int main(){
//     int n;
//     cin>>n;
//     cout<<factorial(n);
//     return 0;
// }

// reverse an array using 2 pointer

// void array_revese(int i,int arr[],int n){
//     if(i==n/2) return;
//     swap(arr[i],arr[n-i-1]);
//     array_revese(i+1,arr,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     array_revese(0,arr,n);
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Reverse an string to check pallidrome

// input will be 'Prabhanshu',str.length()-1,str.start==0
// str.lowercase
// 0 se str.length()-1 tak for loop
// void string_pallidrome(int i,string str,int n){
//     if(i>=n-1/2){
//         cout<<"Good";
//         return;
//     }
//     if(str[i]!=str[n-i-1]) {
//         cout<<"Not valid";
//         return;
//     }
//     string_pallidrome(i+1,str,n);
// }

// int main(){
//     string str;
//     cin>>str;
//     string_pallidrome(0,str,str.length());
//     return 0;
// }

// multi recursive calls
// fibonacci series
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...

int f(int n){
    if (n<=1){
        return n;
    }
    return f(n-1)+f(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}
