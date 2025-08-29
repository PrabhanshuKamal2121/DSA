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


// MERGE SORT

// void merge(int arr[],int low,int mid,int high){
//     vector<int> temp; 
//     int left = low;
//     int right = mid+1;
//     while(left<=mid && right<= high){
//         if(arr[left]<=arr[right]){
//             temp.push_back(arr[left]);
//             left++;
//         }else if(arr[right]<arr[left]){
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }
    
//     // Copy remaining left half
//     while(left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     // Copy remaining right half
//     while(right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }
//     for(int i=low;i<=high;i++){
//         arr[i]=temp[i-low];
//     }
//     return;
// }

// void merge_sort(int arr[],int low,int high){
//     if(low >= high){
//         return;
//     }
//     int mid= (low+high)/2;
//     merge_sort(arr,low,mid);
//     merge_sort(arr,mid+1,high);
//     merge(arr,low,mid,high);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     merge_sort(arr,0,n-1);
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }



// QUICK SORT

// int f(int arr[],int low,int high){
//     int pivot=arr[low];
//     int i=low+1;
//     int j=high;
//     while(i<j){
//         while(arr[i]<pivot && i<=high){
//             i++;
//         }
//         while(arr[j]>pivot && j>=low){
//             j--;
//         }
//         if(i<j) swap(arr[i],arr[j]);
//         swap(arr[low],arr[j]);
//         return j;
//     }

//     return;
// }


// void quick_sort(int arr[],int low,int high){
//     if(low<high){
//         int partition = f(arr,low,high);
//         quick_sort(arr,low,partition-1);
//         quick_sort(arr,partition+1,high);// do it like merge sort
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     quick_sort(arr,0,n);

//     return 0;
// }