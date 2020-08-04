////
////  백준_케익배달_2159.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 3..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include<algorithm>
//#include<climits>
//using namespace std;
//#define MAX_ARR 100010
//
//struct NODE{
//    int x,y;
//};
//NODE node[MAX_ARR];
//long long dp[MAX_ARR][5];
//int dx[5] = {0, 1, 0,-1,0 };
//int dy[5] = {0, 0, 1,0, -1 };
//int n;
//
//int gap(int x1, int y1,int x2, int y2){
//    return abs(x1-x2)+abs(y1-y2);
//}
//
//void init(){
//    for(int i=0; i<=n; i++){
//        for(int j=0; j<5; j++){
//            dp[i][j] =LLONG_MAX;
//        }
//    }
//}
//
//bool safe(int x, int y){
//    return (x>=0&&x<=100000)&&(y>=0&&y<=100000);
//}
//
//int main(){
//    scanf("%d",&n);
//    init();
//  
//    for(int i=0; i<=n; i++){
//        int x, y;
//        scanf("%d %d", &x, &y);
//        node[i].x = x, node[i].y = y;
//    }
//    
//    dp[0][0] =0;
//    
//    for(int i=1; i<=n; i++){
//        for(int j =0; j<5; j++){
//            int cx = node[i].x+dx[j];
//            int cy = node[i].y+dy[j];
//            if(!safe(cx,cy)) continue;
//            for(int k=0; k<5; k++){
//                int px = node[i-1].x+dx[k];
//                int py = node[i-1].y+dy[k];
//                if(!safe(px,py)) continue;
//                if(dp[i-1][k]==LLONG_MAX) continue;
//                dp[i][j] =min(dp[i][j],gap(cx,cy,px,py)+dp[i-1][k]);
//            }
//        }
//    }
//    long long res = LLONG_MAX;
//    for(int i=0; i<5; i++){
//        res = min(res, dp[n][i]);
//    }
//    
//    printf("%lld\n", res);
//    
//    return 0;
//}