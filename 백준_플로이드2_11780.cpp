////
////  백준_플로이드2_11780.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 26..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//
//using namespace std;
//
//#define MAX_ARR 110
//#define INF 10000100
//
//int dist[MAX_ARR][MAX_ARR];
//int parent[MAX_ARR][MAX_ARR];
//int n, m;
//
//void init(){
//    for(int i=1; i<=n; i++){
//        for(int j=1; j<=n; j++){
//            dist[i][j] = INF;
//        }
//        dist[i][i] = 0;
//    }
//    
//}
//
//void Floyd(){
//    
//    for(int k=1; k<=n; k++){
//        for(int i=1; i<=n; i++){
//            for(int j=1; j<=n; j++){
//                if(dist[i][j]>dist[i][k]+dist[k][j]){
//                    parent[i][j]=parent[k][j];
//                    dist[i][j]=dist[i][k]+dist[k][j];
//                }
//            }
//        }
//    }
//}
//
//void find_parent(int s, int e, int depth){
//    if(s==e){
//        printf("%d %d ",depth, s);
//        return;
//    }
//    find_parent(s, parent[s][e], depth+1);
//    printf("%d ", e);
//}
//
//int main(){
//    
//    scanf("%d %d", &n, &m);
//    init();
//    for(int i=0; i<m; i++){
//        int s, e, cost;
//        scanf("%d %d %d", &s, &e, &cost);
//        if(dist[s][e]>cost)
//            dist[s][e] = cost;
//        parent[s][e] = s;
//    }
//    Floyd();
//    
//    
//    for(int i=1; i<=n; i++){
//        for(int j=1; j<=n; j++){
//            if(dist[i][j]>=INF) printf("0 ");
//            else printf("%d ", dist[i][j]);
//        }
//        printf("\n");
//    }
//    
//    for(int i=1; i<=n; i++){
//        for(int j=1; j<=n; j++){
//            if(i==j || dist[i][j]>=INF) printf("0");
//            else find_parent(i, j,1);
//            printf("\n");
//        }
//        
//    }
//    
//    return 0;
//    
//}