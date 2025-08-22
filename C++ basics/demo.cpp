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
 
// int main(){
//     int x;
//     cin >>x;
//     cout<< "HEY " <<x;
// }

// int main(){
//     cout<<"hey helllo"<<endl<<"hey raj" <<endl;
//     cout<< "hey hello buy";
//     return 0;

// }

// int main(){
//     int x,y;
//     cin>>x >>y;
//     cout<< "value of x: " <<x<<"value of y: "<<y;
//     long long z = 250000;
//     return 0;
// }

// int main(){
//     string s1;
//     string s2;
//     cin >> s1>>s2;
//     cout<< s1 << " " << s2 ;
//     return 0;
// } this is not good as for each next word we have to add new string

// int main (){
//     string str;
//     getline(cin,str);
//     cout<< str;
//     return 0;
// }
// // only for one line

// int main(){
//     char ch;
//     cin>> ch;
//     // only one character storage
//     cout<<ch;
//     return 0 ;
// }

// write a program that takes an input of age and prints if it is adult age or normal age

// int main(){
//     int age_input;
//     cin>>age_input;
//     if(age_input>=18){
//         cout<<"adult";
//     }else if(age_input<18){
//         cout<< "Not adult";
//     }
//     return 0 ;
//     /*
//     this is a multiline comment
//     */
// }


// int main(){
//     int age;
//     cin>> age;
//     if (age<18){
//         cout<< "not eligible for job";
//     }else if(age<55){
//         cout<< "eligible for job";
//     }else if(age<=57){
//         cout<<"eligible for jog but soon retirement";
//     }else if(age>57){
//         cout<< "retirement time";
//     }
//     return 0;
// }

// int main(){
//     int day;
//     cin>> day;
//     switch(day){
//         case 1:
//         cout<< "Monday";
//         break;
//         case 2:
//         cout<< "Tuesday";
//         break;
//         default:
//         cout<<"Invalid";
//     }
//     cout<<"Check";
//     return 0;
// }

// int main(){
//     // int arr[5];
//     // // this is int so no float
//     // // array first at 0th index can be stored anywhere but i am sure that next ones will be stored next to it

//     // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
//     // arr[3]+=10;
//     // cout<<arr[3];
//     // return 0;

//     // 2D ARRAY
//     int arr[3][5];// this is creating an array for this dimension
//     arr[1][3]=78;//yeh hamlog iss pparticular point peh value assign kar rahe hai 
//     // baki sab jagah peh garbage value assign hoga
//     cout<<arr[1][3];
//     return 0;
// }

// int main(){
//     string s = "striver";
//     int len = s.size();
//     cout << s[len-1];
//     s[len-1]='z';
//     cout<<s[len-1];
//     return 0;
// }

// int main(){
//     // int i;
//     // for(i=1;i<=10;i=i+1){
//     //     cout<<"striver"<<i<<endl;
//     // }
//     // cout<<i<<endl;]
//     int i=2;
//     do{
//         cout<<'Striver '<<i<<endl;
//         i = i+1;
//     }while(i<=2){
//         cout<<i<<endl;
//     }
//     return 0 ;
// }


// void printName(){
//     cout<<"hey hello";
// }
// int main(){
//     printName();
//     return 0 ;
// }

// void ke sath cout karna hota while normal function ke sath return use karte hai

// int sum(int num1,int num2){
//     int num3 = num1+num2;
//     return num3;
// }

// int main(){
//     int num1,num2;
//     cin>>num1>>num2;
//     int res = sum(num1,num2);
//     cout<<res;
//     return 0;
// }


//PASS BY VALUE
// void dosomething(int num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }

// int main(){
//     int num =10;
//     dosomething(num);
//     // yha 10 print hoga niche kyunki upar jo value bheji thi num woh ek copy thi that's why woh actually change nahi
//     cout<<num<<endl;
//     return 0;
// }

// if we want to change that we will do the following
// this is now called pass by reference
// void dosomething(int &num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }

// int main(){
//     int num =10;
//     dosomething(num);
//     // ab '&' lgane ke badh woh iska address leta hai then usko replace kardeta hai taki same chiz aaye bahar
//     cout<<num<<endl;
//     return 0;
// }

// void dosomething(int arr[]){

// }
int main(){
    int arr[5];
    for (int i=0;i<=4;i=i+1){
        cin>>arr[i];
    }
    for(int i =0;i<=4;i=i+1){
        cout<<arr[i]<<" ";
    }
    return 0;
}








