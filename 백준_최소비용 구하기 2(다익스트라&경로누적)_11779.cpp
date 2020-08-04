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
//#define INF 100000010
//int arr[MAX][MAX];
//int parent[MAX];
//int dp[MAX];
//int n, m;
//int s, e;
//
//void init(){
//    for(int i=1; i<=n; i++){
//        dp[i] = INF;
//        parent[i] = i;
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
//                parent[i] = curr;
//                Q.push(i);
//            }
//        }
//    }
//
//}
//void findPath(int s, int cnt){
//    if(s==parent[s]){
//        
//        printf("%d\n%d ",cnt,s);
//        return;
//    }
//    findPath(parent[s], cnt+1);
//    printf("%d ", s);
//    
//}
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
//    printf("%d\n", dp[e]);
//    findPath(e, 1);
//    printf("\n");
//}