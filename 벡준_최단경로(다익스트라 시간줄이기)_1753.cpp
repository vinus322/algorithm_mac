////
////  벡준_최단경로(다익스트라 시간줄이기)_1753.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 26..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<vector>
//
//using namespace std;
//
//#define MAX_ARR 20010
//#define INF 200010
//
//struct Edge{
//    int s, c;
//    Edge(){}
//    Edge(int start, int cost){
//        s = start;
//        c = cost;
//    }
//    
//    bool operator <(const Edge& v) const{
//        return c>v.c;
//    }
//};
//
//vector<Edge> arr[MAX_ARR];
//int dist[MAX_ARR];
//int visit[MAX_ARR];
//int n, m;
//
//
//void init(){
//    for(int i=0; i<=n; i++){
//        dist[i] = INF;
//        visit[i] = false;
//    }
//}
//
//
//void Dijkstra(int s){
//    
//    priority_queue<Edge> Q;
//    Q.push(Edge(s, 0));
//    dist[s] = 0;
//    
//    while(!Q.empty()){
//        Edge tmp = Q.top(); Q.pop();
//        int s = tmp.s;
//        if(visit[s]) continue;
//        visit[s] = true;
//        int size = (int)arr[s].size();
//        
//        for(int i=0; i<size; i++){
//            int go = arr[s][i].s;
//            int cost = dist[s]+arr[s][i].c;
//            if(dist[go]>cost){
//                dist[go] = cost;
//                Q.push(Edge(go, cost));
//            }
//        }
//        
//    }
//
//}
//
//int main(){
//    int s;
//    
//    scanf("%d %d", &n, &m);
//    scanf("%d", &s);
//    init();
//    
//    for(int i=0; i<m; i++){
//        int s,e, c;
//        scanf("%d %d %d", &s, &e, &c);
//        arr[s].emplace_back(e, c);
//    }
//    
//    Dijkstra(s);
//    
//    for(int i=1; i<=n; i++){
//        int tmp = dist[i];
//        if(tmp>=INF) printf("INF\n");
//        else printf("%d\n", tmp);
//    }
//    
//    return 0;
//}