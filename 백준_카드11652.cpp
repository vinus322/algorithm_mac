////
////  백준_카드11652.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 18..
////  Copyright © 2016년 김민영. All rights reserved.
////
//#include<cstdio>
//#include<iostream>
//#include<map>
//
//using namespace std;
//
//int n;
//map<long long, int> dic;
//
//
//int main(){
//    
//    cin>>n;
//    
//    for(int i=0; i<n; i++){
//        long long x;
//        cin>>x;
//        dic[x]+=1;
//    }
//    
//    int max = 0;
//    long long ans = 0;
//    
//    for(auto t:dic){
//        if(t.second>max){
//            max = t.second;
//            ans = t.first;
//        }else if(t.second==max && t.first<ans){
//            ans = t.first;
//        }
//    }
//    
//    cout<<ans<<endl;
//    
//    return 0;
//}
//
//
