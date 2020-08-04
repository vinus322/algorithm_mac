////
////  백준_지름길_1446.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 25..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<string.h>
//#include<limits.h>
//
//using namespace std;
//
//int min(int x, int y){
//    return x>y? y:x;
//}
//
//int dis[10001];
//struct NODE{
//    int s, e, c;
//};
//
//NODE node[10001];
//
//int N, D;
//
//int main(){
//    //init();
//    scanf("%d %d", &N, &D);
//    
//    for(int i=0; i<N; i++){
//        int s, e, c;
//        scanf("%d %d %d", &s,&e, &c);
//        node[i].s = s, node[i].e = e, node[i].c=c;
//    }
//    
//    for(int i=1; i<=D; i++){
//        dis[i] = dis[i-1]+1;
//        for(int j=0; j<N; j++){
//            if(node[j].e==i)
//                dis[i] = min(dis[i], dis[node[j].s]+node[j].c);
//        }
//    }
//    
//    printf("%d\n",dis[D]);
//    
//    return 0;
//    
//}