#include <bits/stdc++.h>
using namespace std;



// Selection sort
// void selection_sort(int arr[],int n){
//     for(int i=0;i<=n-2;i++){
//         for(int j=i;j<=n-1;j++){
//             if(arr[i]>arr[j]){
//                 int temp = arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     selection_sort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }



// Bubble Sort

// void bubble_sort(int arr[],int n){
//     for(int i=n-1;i>=1;i--){
//         int did_run = 0;
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1] = temp;
//                 did_run=1;
//             }
//         }
//         if (did_run==0){
//             break;
//         }
//         cout<<"ran"<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     bubble_sort(arr,n);
//     for(int i=0;i<=n-1;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }





// Insertion sort

// void insertion_sort(int arr[],int n){
//     for(int i=0;i<=n-1;i++){
//         int j=i;
//         while(j>0 && arr[j-1]>arr[j]){
//             int temp = arr[j-1];
//             arr[j-1]=arr[j];
//             arr[j]=temp;
//             j--;
//         }
//         cout<<"ran"<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     insertion_sort(arr,n);
//     for(int i=0;i<=n-1;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }