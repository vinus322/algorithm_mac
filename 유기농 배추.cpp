////
////  유기농 배추.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 10. 10..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<algorithm>
//#include <queue>
//
//using namespace std;
//
//
//int map[60][60];
//int visit[60][60];
//int m, n, k;
//
//int dx[]={1, 0, -1, 0};
//int dy[] ={0, 1, -1, 0};
//
//
//
//void init(){
//    
//    for(int i=0; i<=n; i++)
//        for(int j = 0; j<=m; j++)
//        {
//            map[i][j] = 0;
//            visit[i][j] =0;
//        }
//    
//}
//
//bool safe(int x, int y){
//    return x<=m&&x>0&&y<=m&&y>0;
//}
//
//
//void bfs(int sx, int sy){
//    
//    queue<pair<int, int>> Q;
//    Q.push({sx, sy});
//    
//    while(!Q.empty()){
//        pair<int, int> tmp = Q.front(); Q.pop();
//        
//        if(visit[tmp.first][tmp.second]) continue;
//        visit[tmp.first][tmp.second] =1;
//        
//        for(int i=0; i<4; i++){
//            int gox = tmp.first+dx[i];
//            int goy = tmp.second+dy[i];
//            if(!safe(gox, goy)) continue;
//            if(!map[gox][goy]) continue;
//            Q.push({gox,goy});
//        }
//    }
//    
//}
//
//
//void solve(){
//    
//    
//    scanf("%d %d %d", &m, &n,&k);
//    init();
//    
//    for(int i=0; i<k; i++){
//        int x,y;
//        scanf("%d %d", &x, &y);
//        map[x][y] = 1;
//    }
//    
//    int res =0;
//    
//    for(int i=1; i<=n; i++){
//        for(int j =1; j<=n; j++){
//            if(visit[i][j]==1) continue;
//            if(!map[i][j]) continue;
//            res++;
//            bfs(i,j);
//        }
//    }
//    
//    printf("%d\n", res);
//    
//}
//
//int main(){
//    
//    int testCase;
//    
//    scanf("%d", &testCase);
//    
//    
//    for(int i=0; i<testCase; i++){
//        solve();
//    }
//    
//    return 0;
//}