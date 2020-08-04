////
////  백준_타임머신(밸만포드_인접리스트)_11657.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 20..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//
//using namespace std;
//#define INF 500000
//
//queue<pair<int, int>> Q;
//vector<pair<int, int>> E[510];
//int dist[510];
//int n, m;
//int cnt = 0;
//
//int main(){
//    scanf("%d %d", &n, &m);
//    
//    for(int i=0; i<m; i++){
//        int  u, v, cost;
//        scanf("%d %d %d", &u, &v, &cost);
//        E[u].push_back(make_pair(v, cost));
//    }
//    
//    for(int i=2; i<=n; i++) dist[i] = INF;
//    
//    Q.push({1, 0});
//    
//    while(!Q.empty()&&((cnt++)<10000)){
//        pair<int, int> tmp = Q.front(); Q.pop();
//        int curr = tmp.first;
//        int cost  = tmp.second;
//        for(auto go : E[curr]){
//            if(dist[go.first]>go.second+cost){
//                Q.push({go.first, go.second+cost});
//                dist[go.first] = go.second+cost;
//            }
//        }
//        
//    }
//    
//    
//    if(cnt>=10000){
//        printf("-1"); return 0;
//    }else{
//        for(int i=2; i<=n; i++){
//            if(dist[i]==INF) dist[i] =-1;
//            printf("%d\n", dist[i]);
//        }
//    }
//    return 0;
//}