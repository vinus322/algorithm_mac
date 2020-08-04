////
////  백준_도망자원숭이_1602.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 26..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//#define MAX_ARR 510
//#define INF 10000000
//
//
//struct MID{
//    int k, time;
//    bool operator <(const MID& A ) const {
//        return time<A.time;
//    }
//};
//
//int dist[MAX_ARR][MAX_ARR];
//int dog[MAX_ARR];
//int MAX[MAX_ARR][MAX_ARR];
//int n,m, q;
//MID mid[MAX_ARR];
//
//void init(){
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n;j++){
//            dist[i][j] = INF;
//        }
//    }
//}
//
//void Floyd(){
//    sort(mid+1,mid+n+1);
//    
//    for(int t=1;t<=n;t++){
//        int k = mid[t].k;
//        for(int i=1;i<=n;i++){
//            for(int j=1;j<=n;j++){
//                int max = (MAX[i][k]>MAX[k][j])? MAX[i][k] : MAX[k][j];
//                if(dist[i][j]+MAX[i][j]>dist[i][k]+dist[k][j]+max){
//                    MAX[i][j] = (MAX[i][k]>MAX[k][j])? MAX[i][k] : MAX[k][j];
//                    dist[i][j]=dist[i][k]+dist[k][j];
//                }
//            }
//        }
//    }
//    
//}
//int main(){
//    scanf("%d %d %d", &n,&m, &q);
//    init();
//    for(int i=1; i<=n;i++){
//        scanf("%d", &dog[i]);
//        dist[i][i] = 0;
//        MAX[i][i] = dog[i];
//        mid[i].k=i;
//        mid[i].time = dog[i];
//    }
//    
//    for(int i=0; i<m; i++){
//        int s, e,cost;
//        scanf("%d %d %d", &s, &e, &cost);
//        int dog_res = (dog[s]>dog[e])? dog[s] : dog[e];
//        dist[s][e] = cost;
//        dist[e][s] = cost;
//        MAX[s][e] = dog_res;
//        MAX[e][s] = dog_res;
//    }
//    
//    Floyd();
//    
//    for(int i=0; i<q; i++){
//        int s, e;
//        scanf("%d %d", &s, &e);
//        if(dist[s][e]>=INF) printf("-1\n");
//        else printf("%d\n",dist[s][e]+MAX[s][e]);
//    }
//    
//    return 0;
//}