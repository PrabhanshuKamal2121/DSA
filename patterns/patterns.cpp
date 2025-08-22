#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set> 
#include <queue>
#include <stack>
#include <cmath>
using namespace std;



/*
****
****
****
****
*/
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
// }


/*
*
**
***
****
*****
*/
// void pattern1(int n){
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
// }



/*
1
12
123
1234
12345
*/
// void pattern2(int n){
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }


/*
*****
****
***
**
*
*/
// void pattern3(int n){
//     for (int i=1;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

/*
    *
   ***
  *****
 *******
*********
*/
// void pattern3(int n){
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<'*';
//         }
//         for(int l=1;l<=i-1;l++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


/*
*********
 *******
  *****
   ***
    *

*/
// void pattern3(int n){
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<'*';
//         }
//         for(int l=1;l<=i-1;l++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
// }

/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

// void pattern3(int n){
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i-1;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=n-i+1;k++){
//             cout<<"*";
//         }
//         for(int l=1;l<=n-i;l++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int m=1;m<=n;m++){
//         for(int n=1;n<=m-1;n++){
//             cout<<" ";
//         }
//         for(int o=1;o<=n-m+1;o++){
//             cout<<"*";
//         }
//         for(int p=1;p<=n-m;p++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

/*

*
**
***
****
*****
*****
****
***
**
*

*/
// void pattern3(int n){
//     for(int i=n;i>=1;i--){
//         for(int j =1;j<=n-i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int k=1;k<=n;k++){
//         for(int l=1;l<=n-k+1;l++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


/*
1
01
101
0101
10101
*/
// void pattern3(int n){
//     int start=1;
//     for(int i=1;i<=n;i++){
//         if(i%2==0)start=0;
//         else start =1;
//         for(int j=1;j<=i;j++){
//             cout<<start;
//             start=1-start;
//         }
//         cout<<endl;
//     }
// }


/*
1%%%%1
12%%21
123321
*/
// void pattern3(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int k=1;k<=n-i;k++){
//             cout<<"%";
//         }
//         for(int l=1;l<=n-i;l++){
//             cout<<'%';
//         }
//         for(int m=i;m>=1;m--){
//             cout<<m;
//         }
//         cout<<endl;
//     }
// }



void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch;
        }
    }
}



int main(){
    int n;
    cin>>n;
    pattern3(n);
    return 0;
}