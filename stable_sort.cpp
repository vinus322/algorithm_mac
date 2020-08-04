////
////  stable_sort.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 15..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<algorithm>
//#include<vector>
//#include<string>
//#include<iostream>
//using namespace std;
//
//struct node{
//    int age;
//    string name;
//};
//
//bool compare(const node &v, const node &u){
//    return v.age<u.age;
//}
//
//int n;
//
//int main(){
//    
//    cin>>n;
//    vector<node> p(n);
//    
//    for(int i=0; i<n; i++){
//        cin>>p[i].age>>p[i].name;
//    }
//    
//    stable_sort(p.begin(), p.end(), compare);
//    
//    for(int i=0; i<n; i++){
//        cout<<p[i].age<<' '<<p[i].name<<"\n";
//    }
//    
//    return 0;
//    
//}