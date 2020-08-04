////
////  백준_웜홀(밸만포드)_1865.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 21..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//#define INF 10000000
//
//struct Edge{
//    int s, e, cost;
//};
//int diff[510];
//int n,m,w;
//vector<Edge> a;
//
//
//void init(){
//    for(int i=1; i<=n; i++){
//        diff[i] = INF;
//    }
//     a.clear();
//}
//
//
//void solve(){
//    cin>>n>>m>>w;
//    init();
//    
//    for(int i=0; i<m; i++){
//        int s,e,cost;
//        cin>> s>>e>>cost;
//        a.push_back({s,e,cost});
//        a.push_back({e,s,cost});
//    }
//    
//    for(int i=0; i<w; i++){
//        int s, e, cost;
//        cin>> s>>e>>cost;
//        a.push_back({s,e,-cost});
//    }
//    
//    bool cycle = false;
//    diff[1] = 0;
//    
//    for(int i=1;i <=n; i++){
//        for(int j=0; j<2*m+w; j++){
//            int s = a[j].s;
//            int e = a[j].e;
//            int c = a[j].cost;
//            if(diff[s]!=INF&& diff[e]>diff[s]+c){
//                diff[e] = diff[s]+c;
//                if(i==n) cycle = true;
//            }
//        }
//    }
//    if(cycle){
//        printf("YES\n");
//    }else printf("NO\n");
//    
//}
//
//
//int main(){
//    
//    int testCase;
//    cin>>testCase;
//    
//    for(int i=0; i<testCase; i++){
//        solve();
//    }
//    
//    return 0;
//}