////
////  백준_타임머신(밸만포드))_11657.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 19..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//#define INFI 5000001
//struct Edge{
//    int from, to, cost;
//    
//    Edge(){};
//    Edge(int f, int t, int c){
//        from = f, to = t, cost = c;
//    }
//};
//Edge E[6010];
//int dist[510];
//
//int n, m;
//
//int main(){
//    
//    cin>>n>>m;
//    
//    for(int i=0; i<m; i++){
//        int a,b,c;
//        scanf("%d %d %d", &a,&b,&c);
//        E[i] = Edge(a,b,c);
//    }
//    
//    for(int i=1; i<=n; i++)
//        dist[i] = INFI;
//    
//    dist[1] = 0;
//    bool nagative_cycle = false;
//    
//    for(int i=1; i<=n; i++){
//        for(int j = 0; j<m; j++){
//            int s = E[j].from;
//            int e = E[j].to;
//            int c = E[j].cost;
//            
//            if(dist[s]!=INFI&&dist[e]>dist[s]+c){
//                dist[e] = dist[s]+c;
//                if(i==n){
//                    nagative_cycle = true;
//                }
//            }
//            
//        }
//    }
//    
//    if(nagative_cycle){
//        printf("-1"); return 0;
//    }else{
//        for(int i=2; i<=n; i++){
//            if(dist[i]==INFI) dist[i] = -1;
//            printf("%d\n", dist[i]);
//        }
//    }
//    
//}