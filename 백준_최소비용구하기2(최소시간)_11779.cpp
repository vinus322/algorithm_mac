////
////  백준_최소비용구하기2(최소시간)_11779.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 21..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include<queue>
//#include<vector>
//using namespace std;
//#define MAX_ARR 1010
//#define INF 100000010
//
//struct Edge{
//    int s,c;
//    Edge(){}
//    Edge(int start,int cost){
//        s = start, c = cost;
//    }
//    bool operator < (const Edge& A ) const{
//        return c>A.c;
//    }
//};
//
//int visit[MAX_ARR];
//int dist[MAX_ARR];
//int parent[MAX_ARR];
//vector<Edge> arr[MAX_ARR];
//priority_queue<Edge> Q;
//int n,m;
//int start, end;
//
//
//
//
//
//int main(){
//    
//    int start, end;
//    scanf("%d %d", &n, &m);
//    for(int i=0; i<m; i++){
//        int s, e, cost;
//        scanf("%d %d %d", &s, &e,&cost);
//        arr[s].push_back(Edge(e,cost));
//    }
//    for(int i=0; i<=n; i++){
//        parent[i] = i;
//        dist[i] = INF;
//        visit[i] = false;
//    }
//    
//    scanf("%d %d", &start, &end);
//
//    
//    Q.push(Edge(start,0));
//    dist[start]=0;
//    
//    while(!Q.empty()){
//        Edge curr = Q.top(); Q.pop();
//        int cidx = curr.s;
//        int size = (int)arr[cidx].size();
//        visit[cidx] = true;
//        
//        for(int i=0; i<size; i++){
//            int go = arr[cidx][i].s;
//            int cost = dist[cidx]+arr[cidx][i].c;
//            if(visit[go]) continue;
//            if(dist[cidx]!=INF&&dist[go]>cost){
//                dist[go] = cost;
//                parent[go] = cidx;
//                Q.emplace(go,dist[go]);
//            }
//        }
//    }
//    
//    vector<int>res;
//    int v = end;
//    res.push_back(v);
//    do{
//        v = parent[v];
//        res.push_back(v);
//    }while(v!=parent[v]);
//    int size = (int)res.size();
//    
//    
//    printf("%d\n%d\n", dist[end], size);
//    for(int i=size-1; i>=0; i--)
//        printf("%d ", res[i]);
//    printf("\n");
//    
//    
//}