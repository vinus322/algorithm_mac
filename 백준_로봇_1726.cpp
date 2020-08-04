////
////  백준_로봇_1726.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 6..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<queue>
//
//using namespace std;
//#define MAX_ARR 101
///*
// 0-동 1-서 2-남 3-북
// 
// 동 북 서 남
// */
//int dirx[4]={0,-1,0,1};
//int diry[4]={1,0,-1,0};
//int H[4]={0,2,3,1};
//int arr[MAX_ARR][MAX_ARR];
//int N, M;
//int sx, sy,sdir, dx,dy, ddir;
//int visit[MAX_ARR][MAX_ARR][4];
//
//struct node{
//    int x, y, dir, cnt;
//};
//
//bool safe(int x, int y){
//    return x<=N&&x>0 && y<=M&& y>0;
//}
//
//bool check(node tmp){
//    return (tmp.x==dx)&&(tmp.y==dy)&&(tmp.dir==ddir);
//}
//
//void bfs(int sx, int sy, int dir){
//    
//    queue<node>Q;
//    Q.push({sx, sy, dir, 0});
//    
//    while(!Q.empty()){
//        node curr = Q.front(); Q.pop();
//        
//        if(visit[curr.x][curr.y][curr.dir]) continue;
//        visit[curr.x][curr.y][curr.dir] = 1;
//        
//        //printf("step %d: %d %d %d\n",curr.cnt, curr.x, curr.y, curr.dir);
//        
//        if(check(curr)){
//            printf("%d\n", curr.cnt);
//            return;
//        }
//        
//        for(int i=1; i<=3; i++){
//            int gox = curr.x+dirx[curr.dir]*i;
//            int goy = curr.y+diry[curr.dir]*i;
//            if(!safe(gox, goy)) continue;
//            if(arr[gox][goy]) break;
//            Q.push({gox, goy, curr.dir, curr.cnt+1});
//        }
//        int left = (curr.dir+1)%4;
//        Q.push({curr.x, curr.y, left, curr.cnt+1});
//        
//        int right = (curr.dir-1+4)%4;
//        Q.push({curr.x, curr.y, right, curr.cnt+1});
//        
//    }
//    
//    
//    
//}
//
//
//
//int main(){
//    scanf("%d %d", &N, &M);
//    
//    for(int i=1; i<=N; i++){
//        for(int j=1; j<=M; j++){
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    
//    scanf("%d %d %d",&sx,&sy,&sdir);
//    scanf("%d %d %d",&dx,&dy,&ddir);
//    sdir = H[sdir-1];
//    ddir = H[ddir-1];
//    bfs(sx,sy,sdir);
//    
//    return 0;
//    
//}