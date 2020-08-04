////
////  백준_경로찾기(플로이드와셜)_11403.cpp
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
//#define MAX_ARR 110
//#define INF 100100
//
//int dist[MAX_ARR][MAX_ARR];
//int n;
//
//
//
//
//void Floyd(){
//    
//    for(int k=1; k<=n; k++){
//        for(int i=1; i<=n; i++){
//            for(int j=1; j<=n; j++){
//                if(dist[i][k]==1 && dist[k][j]==1)
//                    dist[i][j] = 1;
//            }
//        }
//    }
//    
//}
//
//int main(){
//    
//    scanf("%d", &n);
//    
//    for(int i=1; i<=n; i++)
//        for(int j=1; j<=n; j++){
//            scanf("%d", &dist[i][j]);
//        }
//    
//    Floyd();
//    
//    for(int i=1; i<=n; i++){
//        for(int j=1; j<=n; j++)
//            printf("%d ", dist[i][j]);
//        printf("\n");
//    }
//    
//    return 0;
//    
//}