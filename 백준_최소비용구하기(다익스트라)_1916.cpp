////
////  백준_최소비용구하기(다익스트라)_1916.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 21..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<queue>
//
//using namespace std;
//#define MAX 1010
//#define INF 1000000000
//int arr[MAX][MAX];
//int dp[MAX];
//int n, m;
//int s, e;
//
//void init(){
//    for(int i=1; i<=n; i++){
//        dp[i] = INF;
//        for(int j=1; j<=n; j++){
//            arr[i][j] = INF;
//        }
//    }
//}
//
//
//void Dijkstra(int s){
//    
//   
//    queue<int> Q;
//    
//    Q.push(s);
//    dp[s] =0;
//    
//    while(!Q.empty()){
//        int curr = Q.front(); Q.pop();
//        for(int i=1; i<=n; i++){
//            if(arr[curr][i]==INF) continue;
//            if(dp[curr]!=INF&&dp[i]>dp[curr]+arr[curr][i]){
//                dp[i] = dp[curr]+arr[curr][i];
//                Q.push(i);
//            }
//        }
//    }
//
//}
//
//
//int main(){
//    
//    cin>>n>>m;
//    init();
//    
//    for(int i=0; i<m; i++){
//        int s, e, cost;
//        cin>>s>>e>>cost;
//        if(arr[s][e]>cost)
//            arr[s][e]=cost;
//    }
//    
//    cin>>s>>e;
//    Dijkstra(s);
//    cout<<dp[e]<<endl;
//}