////
////  백준_특정한최단경로_1504(다익스트라 중간경로).cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 22..
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
//#define INF 810000
//#define MAX_ARR 810
//struct Edge{
//    int s,c;
//    Edge(){}
//    Edge(int start, int cost){
//        s= start; c=cost;
//    }
//    bool operator < (const Edge &A) const{
//        return c>A.c;
//    }
//};
//
//bool visit[MAX_ARR];
//int dist[3][MAX_ARR];
//vector<Edge> arr[MAX_ARR];
//int n,m;
//
//void init(){
//    for(int i=0; i<=n; i++){
//        dist[0][i] = INF;
//        dist[1][i] = INF;
//        dist[2][i] = INF;
//    }
//}
//
//void visit_init(){
//    for(int i=0; i<=n; i++){
//        visit[i] = false;
//    }
//}
//
//
//void Dijkstra(int s, int* dist){
//    
//    //visit_init();
//    for(int i=0; i<=n; i++){
//        visit[i] = false;
//    }
//    
//    priority_queue<Edge> Q;
//    
//    Q.push(Edge(s,0));
//    dist[s] =0;
//    
//    while(!Q.empty()){
//        Edge tmp = Q.top(); Q.pop();
//        int s = tmp.s;
//        int size = (int)arr[s].size();
//        if(visit[s]) continue;
//        
//        visit[s] = true;
//        
//        for(int i=0; i<size; i++){
//            int go  = arr[s][i].s;
//            int cost = arr[s][i].c+dist[s];
//            
//            if(dist[go]>cost){
//                dist[go] = cost;
//                Q.push(Edge(go,cost));
//            }
//        }
//    }
//
//}
//
//
//int main(){
//    
//    scanf("%d %d",&n, &m);
//    //init();
//    
//    for(int i=0; i<=n; i++){
//        dist[0][i] = INF;
//        dist[1][i] = INF;
//        dist[2][i] = INF;
//    }
//    
//    
//    for(int i=0; i<m; i++){
//        int s, e, cost;
//        scanf("%d %d %d", &s, &e, &cost);
//        arr[s].emplace_back(e, cost);
//        arr[e].emplace_back(s, cost);
//    }
//    
//    int v1, v2;
//    scanf("%d %d", &v1, &v2);
//  
//    Dijkstra(1,dist[0]);
//    Dijkstra(v1,dist[1]);
//    Dijkstra(v2,dist[2]);
//    
//    int res = dist[0][v1]+dist[1][v2]+dist[2][n];
//    int tmp = dist[0][v2]+dist[2][v1]+dist[1][n];
//    res = (res<tmp)? res:tmp;
//    
//    if(res>=INF){
//        printf("-1\n");
//        return 0;
//    }
//    
//    printf("%d\n", res);
//    
//    return 0;
//}
//
//
//
//
