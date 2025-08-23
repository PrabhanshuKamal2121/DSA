#include <bits/stdc++.h>
using namespace std;

// int basicMaths(int n){
//     int cnt = 0;
//     while(n>0){
//         int lastdigit=n%10;
//         cnt = cnt+1;
//         n = n/10;
//     }
//     return cnt;
// }

// int main(){
//     int n;
//     cin>>n;
//     basicMaths(n);
//     return 0;
// }

// int count(int n){
//     int count = int(log10(n)+1);
//     return count;
// }

// int main(){
//     int n;
//     cin>>n;
//     count(n);
//     return 0;
// }
// time complexity is big O of log10(n)
// if the division is happening with 10 it is log10,if divided by 2 then log 2 and so on.//time complexity
// if the no of iteration is based on division time complexoty will be big O of log

// int reverseNum(int n)
// {
//     int rev_num = 0;
//     while (n > 0)
//     {
//         int last_Digit = n % 10;
//         rev_num = (rev_num * 10) + last_Digit;
//         n = n / 10;
//     }
//     return rev_num;
// }

// int main(){
//     int n;
//     cin>>n;
//     // for rev num
//     // cout<<reverseNum(n);
//     if (n==reverseNum(n)){
//         cout<<"its a pallidrome";
//     }
//     else{
//         cout<<"its not a pallidrome";
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arm_num = 0;
//     while (n>0){
//         int last_digit = n%10;
//         arm_num = (last_digit*last_digit*last_digit)+arm_num;
//         n=n/10;
//     }
//     if(arm_num==n){
//         cout<<"this is a armstrongs number";
//     }else{
//         cout<<"this is not a armstrong number";
//     }
// }

// int main(){
//     vector<int> ls;
//     int n;
//     cin>>n;
//     // O(sqrt(n))
//     for(int i=1;i*i<=n;i++){
//         if (n%i==0){
//             ls.push_back(i);
//             if(i!=n/i){
//                 ls.push_back(n/i);
//             }
//         }
//     }
//     // O(no of factors * log(no of factors)) : n is the number of factors
//     sort(ls.begin(),ls.end());
//     // O(number of factors)
//     for(auto it:ls) cout<<it<<" ";
//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int cnt = 0;
//     for (int i = 1; i * i <= n; i++)
//     {
//         if (n%i == 0)
//         {
//             cnt++;
//             if ((n / i) != i)
//             {
//                 cnt++;
//             }
//         }
//     }
//     if (cnt == 2)
//     {
//         cout << "This is a prime number";
//     }
//     else
//     {
//         cout << "This is not a prime number";
//     }
// }



// int main(){
//     int n1;
//     cin>>n1;
//     int n2;
//     cin>>n2;
//     int qcd =1;
//     for(int i=1;i<=min(n1,n2);i++){
//         if(n1%i==0 & n2%i==0){
//             qcd=i;
//         }
//     }
//     cout<<qcd;

// }

// int main(){
//     int a;
//     int b;
//     cin>>a;
//     cin>>b;
//     while(a>0 & b>0){
//         if(a>b){
//             a=a%b;
//         }
//         else {
//             b=b%a;
//         }
//     }
//     if (a==0) cout<<b;
//     else cout<<a;
// }










