////
////  백준_플로이드_11404.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 26..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//#define INF 10000100
//#define MAX_ARR 110
//
//int dist[MAX_ARR][MAX_ARR];
//int n,m;
//
//void init(){
//    for(int i=1; i<=n; i++){
//        for(int j=1; j<=n; j++){
//            if(i==j) dist[i][j] =0;
//            else dist[i][j] = INF;
//        }
//    }
//    
//}
//
//void Floyd(){
//    
//    for(int k=1; k<=n; k++){
//        for(int i=1; i<=n; i++){
//            for(int j=1; j<=n; j++){
//                if(dist[i][j]>dist[i][k]+dist[k][j])
//                    dist[i][j] =dist[i][k]+dist[k][j];
//            }
//        }
//    }
//}
//
//int main(){
//    
//    scanf("%d %d", &n, &m);
//    init();
//    
//    for(int i=0; i<m; i++){
//        int s, e, cost;
//        scanf("%d %d %d", &s, &e, &cost);
//        if(dist[s][e]>cost)
//            dist[s][e]=cost;
//    }
//   
//    Floyd();
//    
//    for(int i=1; i<=n; i++){
//        for(int j=1; j<=n; j++){
//            printf("%d ", dist[i][j]);
//        }
//        printf("\n");
//    }
//    
//    return 0;
//}
