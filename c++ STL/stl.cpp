#include<bits/stdc++.h>
using namespace std;

// void explainPair(){
//     // pair<int,int> p = {1,2};
//     // cout<<p.first<<" "<<p.second;
//     // pair<int,pair<int,int>> p = {1,{2,3}};
//     // cout<< p.first<<" "<<p.second.first<<" "<<p.second.second;
//     pair<int,int> arr[]= {{1,2},{2,3},{3,4}};
//     cout<<arr[1].second;
//     // pair lies in utility library
// }

// void explainVector(){
//     // vector<int> v;
//     // v.push_back(1);
//     // v.emplace_back(1);

//     // vector<pair<int,int>>vec;

//     // vec.push_back({1,2});
//     // vec.emplace_back(1,2);

//     // vector<int> v(5,100);

//     // vector<int> v(5);
//     // vector<int> v1(5,20);
//     // vector<int> v2(v1);
// // we can increase the size of vector 


// // vector<int>::iterator it = v.begin();
// // it++;
// // moving forward when found first location

// // cout<<*(it)<<" ";

// // vector<int>::iterator it = v.end(); here end will point to something right after the last number eg:- {10,23,24,40} so it will point right after 40
// // vector<int>::iterator it = v.rend(); reverse end so it will point right before 10
// // vector<int>::iterator it = v.rbegin();

// // cout<<v[0] <<" " <<v.at(0);
// // cout<<v.back() << " "; // points to the last element

// // for(vector<int>::iterator it = v.begin();it!=v.end();it++){
// //     cout<<*(it)<<" ";
// // }

// // for(auto it = v.begin();it!=v.end();it++){
// //     cout<<*(it)<<" ";
// // }

// // for(auto it:v){
// //     cout<<it<<" ";
// // }//this iterate on the data type and will print everything it iterates upon

// // v.erase(v.begin()+1);
// // v.erase(v.begin()+2,v.begin()+4);

// // vector<int> v(2,100);
// // v.insert(v.begin(),300);
// // v.insert(v.begin()+1,2,10);//at 1 index it will enter 2 of 10's

// // vector<int> copy(2,50);
// // v.insert(v.begin(),copy.begin(),copy.end());//it you have to insert a chunk of it then we will use both begin and end

// // cout<< v.size();
// // v.pop_back();
// // v1.swap(v2);
// // v.clear();// empties all things,clears it

// // cout<<v.empty();//returns true or false



// }




// void explainList(){
//     list<int> ls;

//     ls.push_back(2);//{2}
//     ls.emplace_back(4);//{2,4}
//     ls.push_front(5);//{5,2,4}
//     ls.emplace_front();//{2,4}
//     //insert fucntion takes a lot of time
// }



// void explainDeque(){
//     deque<int>dq;
//     dq.push_back(1);
//     dq.emplace_back(3);
//     dq.push_front(4);
//     dq.emplace_front(5);

//     dq.pop_back();
//     dq.pop_front();

//     dq.back();
//     dq.front();
// }




// void explainStack(){
//     // LIFO - last in first out
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.emplace(5);

//     cout<<st.top();
//     st.pop();

//     cout<<st.top();
//     cout<<st.size();
//     cout<<st.empty();
//     stack<int> st1,st2;
//     st1.swap(st2);
// }

// void explainQueue(){
//     queue<int> q;
//     q.push(1); //{1}
//     q.push(2); //{1,2}
//     q.emplace(4);//{1,2,4}

//     q.back() +=5;

//     cout<<q.back();//prints 9 as it will go to the last block and adds 5 to it so 5+4=9
//     cout<<q.front();//prints 1 as first in first out

//     q.pop(); //{2,9}
//     cout<<q.front(); // print 2
//     //size swap empty same as stack
// }



// void explainPQ(){
//     priority_queue<int>pq;
//     pq.push(5);
//     pq.push(6);
//     pq.push(8);
//     cout<<pq.top();
//     pq.pop(); // will be 8 as it is a max heap by default
//     //above is called max heap

//     priority_queue<int,vector<int>,greater<int>> pq;
//     pq.push(5);
//     pq.push(2);
//     pq.push(8);

//     cout<<pq.top();//will be 2 as now it is min heap
// }

// void explainSet(){
//     // set is sorted and unique
//     set<int> st;
//     st.insert(1);
//     st.emplace(2);
//     st.insert(0);
//     st.insert(3);

//     // auto it=st.find(3);
//     // // find returns an iterator
//     // auto it=st.find(6);//let's say 6 is not in the set then it will point at its end of set.

//     // st.erase(5);
//     // // deletes five

//     auto it1=st.count(4);
//     // this will return one or zero as set always have unique values
//     auto it2=st.count(5);
//     st.erase(it1,it2);// this will erase from it1 to it2 as (starting point,ending point)
// }



// void explainMultiset(){
//     multiset<int> ms;
//     ms.insert(1);
//     ms.insert(1);
//     ms.insert(1);
//     // can store duplicates but sorted 
//     ms.erase(1);//deletes all 1's

//     ms.erase(ms.find(1));
//     //now we can delete the first occurance of one only
//     ms.erase(ms.find(1), ms.find(1) + 2);
//     // erase 1 but go till 2
// }


// void explainUSet(){
//     unordered_set<int> st;
//     /*
//     lower bound and upper bound does not work
//     also it has unique value but not sorted
//     */
// }

// void explainMap(){
//     // duplicate value but unique key in sorted order similar to set data structure,so value can be stored as key value pair
//     map<int,int> mpp;
//     // map<int, pair<int,int>> mpp;
//     mpp[1]=2;
//     mpp.emplace({3,1});
//     mpp.insert({2,4});

//     // [{1,2},{2,4},{3,1}] now the iterator will go for FOR loop, it.first = 1 and it.second = 2, then next it.first = 2 and it.second=4 and so on
//     mpp[{2,3}] = 10;
    
//     for(auto it:mpp){
//         cout<< it.first << " " << it.second <<endl;
//     }

//     cout<<mpp[1];//2
//     cout<<mpp[2];// 0

//     auto it = mpp.find(3);//it value where it is
//     cout<< *(it).second;//if we give star it is the element {1,2}and if we give second its the value {2} as it is on key 1

//     auto it =mpp.find(5);// if does not exist point to the end
//     auto it = mpp.lower_bound(2);
//     auto it = mpp.upper_bound(3);
// }

// void explainMultiMap(){
//     // everything same as map, only it can store multiple keys
//     // only mpp[key] cannot be used here
// }


// void explainUnorderMap(){
//     //same as set and unordered_set difference
// }

// bool comp(pair<int,int> p1,pair<int,int> p2){
//     if(p1.second <p2.second) return true;
//     if (p1.second>p2.second) return false;

//     if(p1.first>p2.first) return true;
//     return false;
// }

// void explainExtra(){
//     // // sort(a,a+n);
//     // // sort(v.begin(),v.end());

//     // // sort(a+2,a+4);// 2nd se leke 4th place tak wali chiz sort kar dega
//     // // sort(a,a+n,greater<int>);// sorts in decending order
//     // pair<int,int> a[] = {{1,2},{2,1},{4,1}}
//     // // sort it according to second element
//     // // if second element is same, then sort
//     // // it according to first element but in descending
//     // sort(a,a+n,comp); //comp is a self written comparator, and is a boolean function
//     // // the above we can see we have created a comparater 


//     // int num=7;
//     // int cnt = __builtin__popcount(); // counts how many one's are their

//     // long long num = 23908409328409;
//     // int cnt = __builtin_popcountll();

//     string s = "123";
//     sort(s.begin(),s.end()); //sort karke bhejo warna 231 one peh sirf isse bade wale ka permutation nikalenge and wahi return karenge sirf
//     do{
//         cout<<s<<endl;
//     }
//     while(next_permutation(s.begin(),s.end()));
    

//     int maxi = *max_element(a,a+n);

// }




















